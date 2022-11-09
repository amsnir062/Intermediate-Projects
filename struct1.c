//WAP to input roll,name and Addressof the student then display them using structure
#include<stdio.h>
struct student{
    int roll;
    char name[20];
    char add[40];
}s;
void main()
{
    printf("Enter RollNo.:\t");
    scanf("%d",&s.roll);
    printf("Enter Name:\t");
    scanf("%s",s.name);
    printf("Enter Address:\t");
    scanf("%s",s.add);
    printf("The roll number of student is:\t%d\nName is:\t%s\nAddress is:\t%s\n",s.roll,s.name,s.add);
}
