#include<stdio.h>
int main()
{
	int customerid;
	float units,newbill,tax;
	char name;
	float chargeperunit, surcharge,bill,total;
	
	printf("Enter customer id = ");
	scanf("%d",&customerid);
	
	printf("Enter customer name = ");
	scanf("%s",&name);
	
	printf("Enter units consumed = ");
	scanf("%f",&units);
	
	if(units<=199)
	{
		chargeperunit=1.20;
		printf("your one unit = %f\n",chargeperunit);
	}
	else if(units>=200 && units<=400)
	{
		chargeperunit=1.50;
		printf("your one unit = %f\n",chargeperunit);
		
	}
	else if(units>=400 && units<=600)
	{
		chargeperunit=1.80;
		printf("your one unit = %f\n",chargeperunit);
	}
	else
	{
		chargeperunit=2.00;
		printf("your one unit = %f\n",chargeperunit);
	}
	bill=units*chargeperunit;
	printf("total  bill is %f\n",bill);
	
	
	if(bill<100)
    {
    	bill=100;
	}
	
	
	if(bill>400)
	{
		tax=bill*0.15;
		printf("tax is %f\n",tax);
	}
	newbill=tax+bill;
	printf("newbill is %f\n",newbill);
}
