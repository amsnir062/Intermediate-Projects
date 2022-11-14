//WAp to take roll,name and fee of 5 students then display using structure.Where fee is greater than 10000.
#include<stdio.h>
struct employee{
    int roll;
    char name[20];
    int fee;
}s[5];
void main()
{
    int i;
    for(i=0;i<5;i++)
    {
    printf("Enter Roll Number:\t");
    scanf("%d",&s[i].roll);
    printf("Enter Name:\t");
    scanf("%s",s[i].name);
    printf("Enter Fee:\t");
    scanf("%d",&s[i].fee);
    }
    for(i=0;i<40;i++){
        if(s[i].fee>10000)
        printf("The Roll Number of student is:\t%d\nName is:\t%s\nFee is:\t%d\n",s[i].roll,s[i].name,s[i].fee);
}
}
