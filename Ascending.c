//WAP to input the number from the user and sort them in ascending order.
#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,num[10],temp;
  clrscr();
  printf("Enter the numbers");
  for(i=0;i<10;i++)
  {
    scanf("%d",&num[i]);
  }
  for(i=0;i<10;i++)
  {
    for(j=0;j<10;j++)
    {
      if(num[i]<num[j])
      {
        temp=num[i];
        num[i]=num[j];
        num[j]=temp;
      }
    }
  }
  printf("Number in ascending order is:\t",temp);
  for(i=0;i<10;i++)
  {
    printf("%d",num[i]);
  }
  getch();
}
     
