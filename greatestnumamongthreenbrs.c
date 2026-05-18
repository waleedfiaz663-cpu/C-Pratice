#include<stdio.h>
int main()
{
    int num1;
    int num2; 
    int num3;

    printf("enter first num : ");
    scanf("%d",&num1);

    printf("enter second num : ");
    scanf("%d",&num2);

    printf("enter third num : ");
    scanf("%d",&num3);

    if(num1>=num2&&num1>=num3)
    {
        printf(" greater number is : %d",num1);
    }
    else if(num2>=num1&&num2>=num3)
    {
        printf("greater number is : %d",num2);
    }
    else
    {
        printf("greater number is : %d",num3);
    }
}