#include<stdio.h>
int main()
{
    int i;
    int arr[5];
    long long product = 1;
    for(int i=0;i<5;i++)
    {
        printf("enter number %d\n",i+1);
        scanf("%d",&arr[i]);
        product=product*arr[i];
    }
    printf("----the product of all array elements are----\n");
    printf("%d\n",product);
}