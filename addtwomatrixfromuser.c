#include<stdio.h>
int main()
{
    int i,j;
    int sum=0;
    int r;
    printf("enter num of rows = ");
    scanf("%d",&r);
    int c;
    printf("enter num of col = ");
    scanf("%d",&c);
    printf("enter num of elements = ");
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        scanf("%d",&arr[i][j]);
    }
    printf("matrix elements:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        printf("%d",arr[i][j]);
        printf("\n");
    }
int sumo=0;
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
    sum=sum+arr[i][j];
    }
}
 printf("----the sum of rows and column is---- %d",sum);
}