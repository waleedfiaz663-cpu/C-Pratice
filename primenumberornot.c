#include<stdio.h>
int prime(int n)
{
    int i;
    if(n<=1)
    return 0;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            return 0;
        }
    return 1;
}    
    int main()
    {
        int num;
        printf("enter a num = ");
        scanf("%d",&num);
        if(prime(num)==1)
        printf("%d is a prime number",num);
        else
        printf("%d is not a prime number",num);
    }
     
