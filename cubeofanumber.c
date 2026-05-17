#include<stdio.h>
int cube(int num)
{
    int cube;
cube=num*num*num;
return num*num*num;
}
int main()
{
    int num,result;
    printf("enter a number = ");
    scanf("%d",&num);
    result=cube(num);
    printf("the cube of %d is %d",num,result);
}