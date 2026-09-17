#include <stdio.h>

static int num;
extern int num;

int func_1()
{
    printf("num is %d from file2\n", num);

    return 0;
}
/*
    STATIC vs EXTERN — LINKAGE

    static int num;
        → INTERNAL LINKAGE
        → num is private to this .c file.
        → Other .c files CANNOT access this num using extern.

    extern int num;
        → EXTERNAL LINKAGE
        → Does not create a new variable.
        → Tells the compiler:
          "num is defined in another .c file; use that variable."

    Example:

        // file1.c
        int num = 10;

        // file2.c
        extern int num;

        // file2.c can access file1.c's num → 10


    BUT:

        // file1.c
        static int num = 10;

        // file2.c
        extern int num;

        // ❌ extern CANNOT access file1.c's static num.
        // static made num private to file1.c.


    IMPORTANT:
        static → INTERNAL → private to this source file
        extern → EXTERNAL → access a global from another source file

        extern is NOT linked to static.
        extern can access only a variable with external linkage.

    ALSO:
        static and extern are about LINKAGE,
        NOT about whether the variable is in the data/BSS segment.
*/
/*
    WHAT HAPPENS IN THIS PROGRAM:

    file1.c:
        int num;
        // Creates a global num.
        // This num is initialized to 0.

        num++;
        // This increments file1's num:
        // 0 → 1 → 2 → 3 → ...

        func_1();
        // Calls func_1() in file2.c.


    file2.c:
        static int num;
        // Creates a NEW and separate num.
        // Because it is static, it has INTERNAL linkage.
        // This num belongs only to file2.c.
        // It is initialized to 0.

        printf(..., num);
        // Uses file2's static num, NOT file1's num.
        // file2's num is never incremented.
        // Therefore it always remains 0.


    IMPORTANT:

        file1.c → int num;
                  ↓
                  num++ → 1, 2, 3, 4...

        file2.c → static int num;
                  ↓
                  always 0

        Therefore output:

            num is 0 from file2
            num is 0 from file2
            num is 0 from file2
            ...


    WHY?

        `static int num` in file2.c creates a DIFFERENT variable
        from `int num` in file1.c.

        They have the same name but are TWO different variables.

        static → INTERNAL LINKAGE → private to file2.c.

    NOTE:
        If `extern int num;` is placed after `static int num`
        in the SAME file, it causes a linkage conflict/error.

        But if file2 only has `static int num`,
        the program compiles and prints 0 repeatedly.
*/