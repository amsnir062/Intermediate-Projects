//WAP to input book_id,book_name,book_price and Author name of a book then display them using structure
#include<stdio.h>
struct book{
    int id;
    char name[40];
    float price;
    char auth[30];
    
}b;
void main()
{
    printf("Enter Book id,Book name,Book price,Author Name in order:\t");
    scanf("%d\n%s\n%f\n%s",&b.id,b.name,&b.price,b.auth);
    printf("The Id of Book is:\t%d\nThe name of book is:\t%s\nThe price of book is:\t%f\nThe name of Author is:\t%s",b.id,b.name,b.price,b.auth);
    
}
