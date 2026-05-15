#include<stdio.h>
int main()
{
    char ch;
	printf("Enter a char = ");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	{
		printf(" '%c' is a upper case letter\n",ch);
	}
	else if(ch>=97 && ch<=122)
	{
		printf(" '%c' is a lower case letter\n",ch);
	}
	else if(ch>=48 && ch<=57)
	{
		printf(" '%c' is a digit\n",ch);
	}
	else
	{
		printf(" '%c' is special symbol",ch);
	}
}
