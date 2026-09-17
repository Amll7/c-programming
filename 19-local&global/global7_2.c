#include <stdio.h>

extern int num;
extern int num;

int func_1()
{
    printf("num is %d from file2\n", num);

    return 0;
}

/*
    EXTERN STORAGE CLASS

    global6_1.c:
        int num;
        // Defines the global variable num.
        // Global variables are initialized to 0 by default.

        num++;
        // Increases num:
        // 0 → 1 → 2 → 3 → ...

        func_1();
        // Calls func_1() from global6_2.c.

    global6_2.c:
        extern int num;
        // Declares that num is defined in another file.
        // Does NOT create a new variable.

        extern int num;
        // Duplicate extern declaration.
        // VALID. It still refers to the SAME num.

        printf(..., num);
        // Prints the current value of the same num.

    EXECUTION:
        num = 0
          ↓
        num++ → 1
          ↓
        func_1() → prints 1
          ↓
        num++ → 2
          ↓
        func_1() → prints 2
          ↓
        continues forever because while(1).

    KEY POINT:
        int num;          → DEFINES the variable
        extern int num;  → DECLARES an existing variable

        extern does NOT create a new variable.
        Multiple extern declarations are allowed.
*/