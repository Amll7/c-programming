#include<stdio.h>
union endian 
{
    int num;
    char arr[4];
};
int main()
{
    union endian u;
    u.num=0x12345678;
    if(u.arr[0]==0x78)
    {
        printf("Little endian.");
    }
    else
    {
        
    }
}