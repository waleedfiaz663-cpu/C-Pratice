#include<stdio.h>
int pow(int base,int exponent)
{
    int result=1;
    for(int i=1;i<=exponent;i++)
    {
        result=result*base;
    }
    return result;
}
int main()
{
    int base;
    printf("Enter base number: ");
    scanf("%d", &base);

    int exponent;
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    int result=pow(base,exponent);
    printf("%d is raised to %d is %d",base,exponent,result);
}