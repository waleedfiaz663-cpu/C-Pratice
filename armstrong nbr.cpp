 #include <stdio.h>
int main()   
{
    int num,d1,d2,d3;

    printf("Armstrong numbers between 100 and 500 are:\n");

    for(num = 100; num <= 500; num++) 
	{
        d1 = num / 100;          
        d2 = (num / 10) % 10;    
        d3 = num % 10;           

        if(d1*d1*d1 + d2*d2*d2 + d3*d3*d3 == num)
		 {
            printf("%d\n", num);
        }
    }

    return 0;
}

