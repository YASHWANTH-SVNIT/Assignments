//WRITE A FUNCTION TO READ INFORMATION OF BOOK AND DISPLAY THE INFORMATION USING POINTER TO STRUCTURE

#include <stdio.h>

struct Book 
{
    char title[50];
    char author[50];
    int year;
};

void readBook(struct Book *b);
void displayBook(const struct Book *b);

int main()
{
    struct Book b;
    readBook(&b);
    displayBook(&b);
    return 0;
}

void readBook(struct Book *b) 
{
    printf("Enter title: ");
    scanf("%49s", b->title); 
    printf("Enter author: ");
    scanf("%49s", b->author); 
    printf("Enter year: ");
    scanf("%d", &b->year);
}

void displayBook(const struct Book *b) {
    printf("\nBook Information:\n");
    printf("Title: %s\n", b->title);
    printf("Author: %s\n", b->author);
    printf("Year: %d\n", b->year);
}
