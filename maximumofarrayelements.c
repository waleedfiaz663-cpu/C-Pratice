#include<stdio.h>
int main()
{
    int max=-1;
    int i;
    int arr[7];
    for(int i=0;i<7;i++)
    {
        printf("enter number elements %d\n",i+1);
        scanf("%d",&arr[i]);
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("----the maximum number is----\n");
    printf("%d",max);
}