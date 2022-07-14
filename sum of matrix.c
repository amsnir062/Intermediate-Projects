#include <stdio.h>
#include <conio.h>
void main()
{
  int i,j,a[2][2],b[2][2];
  printf("Enter the elements for first matrix:\n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("Enter the elements for second matrix:\n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
  printf("The matrix is:\n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      printf("%d\t",a[i][j]+b[i][j]);
    }
    printf("\n");
  }
  getch();
}
