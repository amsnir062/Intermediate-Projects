#include <stdio.h>
#include <conio.h>
void main()
{
   int a[10],b,i,j;
   printf("Enter the numbers: ");
   for(i=0;i<10;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<10;i++)
   {
       for(j=0;j<9;j++)
       {
            if(a[i]<a[j])
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }    
       }
   }
   printf("The ascending numbers is: ");
   for(i=0;i<10;i++)
   {
       printf("%d\t",a[i]);
   }
   getch();
}
