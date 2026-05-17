#include<stdio.h>
void swap(int*a,int*b)
{
int temp=*a;
*a=*b;
*b=temp;
printf("swap inside *a=%d,*b=%d\n",*a,*b);
}
int main()
{
    int x=10,y=15;
    printf("before swap x=%d,y=%d\n",x,y);
    swap(&x,&y);
    printf("after swap x=%d,y=%d\n",x,y);
    return 0;
}

