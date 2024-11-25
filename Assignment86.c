//WRITE A FUNCTION TO READ LINE OF TEXT AND FIND OUT  LENGTH OF STRING

#include<stdio.h>

int main()
{
    char str[100];
    int size=0;
    printf("Enter the string: ");
    scanf(" %[^\n]s",str);

    for(int i=0;str[i]!='\0';i++)
        size++;

    printf("\nThe Length of the string is %d",size);
    return 0;
}