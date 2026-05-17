#include<stdio.h>
void increasesalary(int*salary)
{
    *salary=*salary+(*salary*0.10);
}
int main()
{
    int salary;
    printf("enter salary : ");
    scanf("%d",&salary);
    increasesalary(&salary);
    printf("salary after 10 percent increment is %d\n",salary);
    return 0;
}