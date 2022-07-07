// WAP to input 5 numbers initialization in array and calculate the sum
#include <stdio.h>
#include <conio.h>
{
    int i,sum=0;
    int num[5]={4,5,6,7,8};
    printf("\nThe sum of five numbers is:\t");
     for(i=0;i<5;i++)
    {
        printf("%d\t",&num[i]);
        sum=sum+num[i];
    }
    printf("\n The sum of 5 numbers is:%d",sum);
    getch();
}
