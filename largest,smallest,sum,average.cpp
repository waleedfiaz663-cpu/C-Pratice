#include<stdio.h>
int main()
{
	int i,largest,num,smallest;
	 float sum=0,average;
	 for(i=1;i<=10;i++)
	{
	printf("enter 10 numbers = ");
    scanf("%d",&num);
	largest=num;
	smallest=num;
	sum=num;
	
		sum=sum+num;
		average=sum/10.0;
	printf("sum=%d\n",sum);
	printf("average=%d\n",average);
    }
	if(num>largest)
	{
	largest=num;
	}
	if(num<smallest)
	{
	smallest=num;
	}
	printf("largest number is %d\n",largest);
	printf("smallest number is %d\n",smallest);
	return 0;
}
