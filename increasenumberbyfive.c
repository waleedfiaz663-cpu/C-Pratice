#include<stdio.h>
void increasebyfive(int*num)
{
    *num=*num+5;
}
int main()
{
    int number;
    printf("enter a num : ");
    scanf("%d",&number);
    increasebyfive(&number);
    printf("num increase by five is %d ",number);
    return 0;
}