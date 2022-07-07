#include <stdio.h>
#include <conio.h>
void main()
{
    int num[5],i,sum=0;
    printf("Enter the marks f five subjects: \n");
     for(i=0;i<5;i++)
    {
        scanf("%d\t",&num[i]);
        sum=sum+num[i];
    }
    printf("\n The total is: %d",sum);
    getch();
}
