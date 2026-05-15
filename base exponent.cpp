#include<stdio.h>
int main()
{
	int base,exponent;
	int result=1;
	printf("enter base num = ");
	scanf("%d",&base);
	printf("enter exponent = ");
	scanf("%d",&exponent);
	for(int i=0;i<exponent;i++)
	{
		result=result*base;
	}
	printf("%d^%d=%d",base,exponent,result);
}
