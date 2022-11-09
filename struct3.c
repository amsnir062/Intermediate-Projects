//WAP to input the emp_id,emp_name,emp_salary and emp_age of 40 employees then display them using structure
#include<stdio.h>
struct employee{
    int id;
    char name[20];
    int sal;
    int age;
}s[40];
void main()
{
    int i;
    for(i=0;i<40;i++)
    {
    printf("Enter ID:\t");
    scanf("%d",&s[i].id);
    printf("Enter Name:\t");
    scanf("%s",s[i].name);
    printf("Enter Salary:\t");
    scanf("%d",&s[i].sal);
    printf("Enter age:\t");
    scanf("%d",&s[i].age);
    }
    for(i=0;i<40;i++){
    printf("The ID of employee is:\t%d\nName is:\t%s\nSalary is:\t%d\nAge is:\t%d",s[i].id,s[i].name,s[i].sal,s[i].age);
}
}
