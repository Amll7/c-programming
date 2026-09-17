#include <stdio.h>

int main()
{
    int num = 0x12345678;
    char *ptr = (char*)&num;

    if (*ptr == 0x78)
        printf("Little endian");
    else if (*ptr == 0x12)
        printf("Big endian");

    return 0;
}