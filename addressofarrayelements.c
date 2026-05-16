#include<stdio.h>
int main()
{
    int i;
    int arr[5];
    for(int i=0;i<5;i++)
    {
        printf("enter num %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("-----address of first array element----\n");
    printf("%p\n",&arr[0]);
    printf("----address of second array element----\n");
    printf("%p\n",&arr[1]);
    printf("----address of third array element----\n");
    printf("%p\n",&arr[2]);
    printf("----address of fourth array element----\n");
    printf("%p\n",&arr[3]);
    printf("----address of fifth array element----\n");
    printf("%p\n",&arr[4]);
}