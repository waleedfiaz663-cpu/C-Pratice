#include<stdio.h>
struct student
{
    int rollno;
    int marks;
    char name[25];
};
int main()
{
    struct student s[50];
    int n;

    printf("enter number of students : ");
    scanf("%d",&n);
    printf("\n");

    for(int i=0;i<n;i++)
    {
        printf("enter rollno : ");
        scanf("%d",&s[i].rollno);

        printf("enter marks : ");
        scanf("%d",&s[i].marks);

        printf("enter name : ");
        scanf("%s",s[i].name);
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
    printf("====student details====\n");
    printf("rollno : %d\n",s[i].rollno);
    printf("marks : %d\n",s[i].marks);
    printf("name : %s\n",s[i].name);
    }
}