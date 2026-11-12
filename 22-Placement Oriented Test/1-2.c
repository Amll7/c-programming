//waveform of matrix
#include<stdio.h>
int main()
{
    int row,col,i,j;
    printf("Enter row:");
    scanf("%d",&row);
    printf("Enter col:");
    scanf("%d",&col);
    int arr[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",arr[j][i]);
        }
    }
}