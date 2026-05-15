#include<stdio.h>
int main()
{
	int y; 
	printf("enter the year = ");
	scanf("%d",&y);
	if(y%400==0)
	{
		printf("%d is leap year\n\n",y);
		
	}
	else if(y%100==0)
	{
		printf("%d is Not leap year\n\n",y);
	}
	else if(y%4==0)
	{
		printf("%d is leap year\n\n",y);
	}
	else {
		printf("Not Leap year\n\n2");
	}
}

