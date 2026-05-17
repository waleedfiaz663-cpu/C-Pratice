#include <stdio.h>

void swapnum(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("\nInside function after swapping: a = %d, b = %d\n", a, b);
}
int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    swapnum(num1, num2);   

    return 0;
}