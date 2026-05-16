#include<stdio.h>
int main()
{
int i;
int arr[6];
for(int i=0;i<6;i++)
{
    printf("element number is %d\n",i+1);
    scanf("%d",&arr[i]);
}
printf("\n---- reverse output -----\n");
for( i=5;i>=0;i--)
{
printf("%d\n",arr[i]);
}
}
