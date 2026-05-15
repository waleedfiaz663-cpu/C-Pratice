#include<stdio.h>
int main()
{
	int num,limit,i;
	 
    printf("enter a num = ");
    scanf("%d",&num);
    
    printf("enter limit = ");
    scanf("%d",&limit);
    
     printf("factor of %d upto %d are\n",num,limit); 
     
    for(i=num;i<=limit;i=i+num)
    {
	printf("%d\n",i);
   
	}
}
