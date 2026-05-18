#include<stdio.h>
void increment(int x)
{
    x=x+1;
    printf("inside increment x=%d\n",x);
}
int main()
{
  int a=5;
  printf("before increment x=%d\n",a);
  increment (a);
  printf("after increment x=%d\n",a);
  return 0;
}
