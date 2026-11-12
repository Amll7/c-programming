#include<stdio.h>
void print(int* arr[])
{
    *(arr[0])=100;
    *(arr[1])=100;
    *(arr[2])=100;
}
int main()
{
    int eng,maths,phy;
    printf("Enter the marks of the subjects English,Maths,Physics :");
    scanf("%d %d %d",&eng,&maths,&phy);
    printf("Before modifing :");
    printf("%d %d %d",eng,maths,phy);
    int* arr[3];
    arr[0]=&eng;
    arr[1]=&maths;
    arr[2]=&phy;
    print(arr);
    printf("\nAfter modifing :\n");
    printf("%d %d %d",eng,maths,phy);
}