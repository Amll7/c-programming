#include <stdio.h>

int main()
{
    int x;

    {
        int x = 10;

        {
            extern int x;
            printf("x %d\n", x);
        }

        printf("x %d\n", x);
    }

    printf("x %d\n", x);

    return 0;
}

static int x = 20;

/*
    IMPORTANT

    int x;                 // x1: local to main, uninitialized

    {
        int x = 10;        // x2: new local x, hides x1

        {
            extern int x;
            // IMPORTANT:
            // A previous x is visible here: the x = 10 above.
            // Therefore this extern declaration refers to that
            // visible local x, NOT the global static x.
            //
            // So x = 10.

            printf("%d", x);   // prints 10
        }

        printf("%d", x);      // prints 10
    }

    printf("%d", x);
    // Now x refers to the outer "int x;".
    // It was never initialized.
    // Therefore its value is indeterminate/undefined behavior
    // when printed.

    static int x = 20;
    // This is a separate file-scope variable.
    // It is NOT used by the inner extern declaration.

    KEY POINT:
    extern does NOT always mean "go find a global variable".
    At block scope, a visible previous declaration can determine
    what the extern declaration refers to.

    OUTPUT CONCEPT:
        x 10
        x 10
        x <indeterminate/undefined>

    The first two prints are definitely 10.
*/