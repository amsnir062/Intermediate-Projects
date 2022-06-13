#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char name[10];
    int length;
    printf("Enter the string: ");
    gets(name);
    length=strlen(name);
    puts(name);
    printf("The no. of characters in string is: %d",length);
    getch();
}
