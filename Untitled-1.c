#include <stdio.h>
#include <conio.h>
void main()
{
    int i,num[10];
    clrscr();
    printf("Enter the 10 number:\t");
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("\nThe 10 numbers are:\t");
    for(i=0;i<10;i++)
    {
        printf("%d\t",&num[i]);
    }
    getch();
}
