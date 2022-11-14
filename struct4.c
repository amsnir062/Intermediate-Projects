//WAp to input roll,name,address and six subjext marks then display using structure
#include<stdio.h>
struct student{
    int roll;
    char name[30];
    char add[30];
    int a[6];
}s;
void main()
{
    int i;
    printf("Enter roll number, name, address in order");
    scanf("%d%s%s",&s.roll,s.name,s.add);
    printf("Enter marks of six subjects:\t");
    for(i=0;i<6;i++)
    {
        scanf("%d",&s.a[i]);
    }
    printf("The roll number is: %d\nName is:%s\nAddress is:%s\n",s.roll,s.name,s.add);
    printf("The marks of six subjects are:\t");
    for(i=0;i<6;i++)
    {
        printf("%d\n",s.a[i]);
    }    
}
