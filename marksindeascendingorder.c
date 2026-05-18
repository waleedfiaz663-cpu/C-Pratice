#include <stdio.h>

struct student
{
    int rollno;
    char name[25];
    int marks;
};

int main()
{
    int n, i, j;
    struct student temp;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student s[n];   

    for(i = 0; i < n; i++)
    {
        printf("\nEnter roll number: ");
        scanf("%d", &s[i].rollno);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }

    
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(s[i].marks < s[j].marks)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\n==== Sorted List ====\n");
    for(i = 0; i < n; i++)
    {
        printf("RollNo: %d  Name: %s  Marks: %d\n",
               s[i].rollno, s[i].name, s[i].marks);
    }

    return 0;
}
