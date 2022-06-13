#include <stdio.h>
#include <conio.h>
void main()
{
    int i,a[5],sum=0;
    printf("Enter the marks:\t");
    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum=sum + a[i];
    }
    printf("The total is: %d",sum);
    getch();
}
