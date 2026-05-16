#include<stdio.h>
int main()
{
    int i;
    int arr[5];
    int sum = 0;
    for(int i=0;i<5;i++)
    {
        printf("enter num is %d\n",i+1);
        scanf("%d",&arr[i]);
         sum = sum+arr[i];
       
    }
    printf("----the sum of all numbers is----\n");
    printf("%d",sum);

}