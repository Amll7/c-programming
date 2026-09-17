#include <stdio.h>

extern int num;

int func_2()
{
    printf("num is %d from global3\n", num);

    return 0;
}
/*
    EXTERN – 

    global6_1.c:
        int num;        // Defines the global variable.
                        // Initially num = 0.

    main():
        while(1)
        {
            num++;      // num increases: 0 → 1 → 2 → 3 → ...

            func_1();   // Calls func_1() from global6_2.c.
            func_2();   // Calls func_2() from global6_3.c.
        }

    global6_2.c:
        extern int num;
        // Does NOT create a new num.
        // It tells the compiler that num is defined in another file.
        // func_1() uses the SAME num from global6_1.c.

    global6_3.c:
        extern int num;
        // Again uses the SAME num from global6_1.c.
        // No new variable is created.

    EXECUTION:
        num = 0
          ↓
        num++ → 1
          ↓
        func_1() → prints 1
          ↓
        func_2() → prints 1
          ↓
        num++ → 2
          ↓
        func_1() → prints 2
          ↓
        func_2() → prints 2
          ↓
        ...continues because while(1) is infinite.

    KEY POINT:
        int num;          → defines/creates the global variable.
        extern int num;  → accesses the variable defined elsewhere.

        There is ONLY ONE num shared by all three files.
*/