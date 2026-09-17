#include <stdio.h>

static int x = 20;

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
/*
    WHAT HAPPENS IN THIS PROGRAM:

    static int x = 20;
    // Global x is defined with INTERNAL linkage.
    // It belongs only to this source file.
    // Its value is 20.

    int main()
    {
        int x;
        // Creates a new local x.
        // This x is uninitialized.

        {
            int x = 10;
            // Creates another new local x.
            // This x hides the previous x.
            // Its value is 10.

            {
                extern int x;
                // ❌ COMPILER ERROR.
                // extern tries to give x external linkage,
                // but a static x with internal linkage already
                // exists with the same identifier in this
                // translation unit.
            }
        }
    }

    RESULT:
        COMPILATION ERROR ❌

    IMPORTANT:
        static → INTERNAL linkage
        extern → EXTERNAL linkage

        static x and extern x cannot conflict like this.

    The program does NOT reach printf().
*/