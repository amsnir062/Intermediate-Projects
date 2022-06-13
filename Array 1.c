#include <stdio.h>
#include <conio.h>
void main()
{
    int i,a[10];
    printf("Enter a number: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        printf("\t");
    }
    printf("The output is: ");
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    getch();
}
