#include<stdio.h>
int main()
{
    int i;
    int arr[6];
    int brr[6];
    for(int i=0;i<=5;i++)
    {
        printf("enter number elements %d\n",i+1);
        scanf("%d",&arr[i]);
        brr[5-i]=arr[i];
    }
    for(int i=0;i<=5;i++)
    {
    printf("%d",brr[i]);
    }
}