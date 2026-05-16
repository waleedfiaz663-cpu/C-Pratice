#include<stdio.h>
int main()
{
    int i;
    int arr[7]={1,2,3,4,5,6,7};
    int x=2;
    for(int i=0;i<=6;i++)
    {
        if(arr[i]==x)
        {
            printf("%d is present in array and its index is %d\n",x,i);
        }
    }
}