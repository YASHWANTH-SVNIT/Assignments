//WRITE A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER

#include<stdio.h>

#define s str[i]==

int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf(" %[^\n]",str);

    int vowels=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(s'A'||s'E'||s'I'||s'O'||s'U'||s'a'||s'e'||s'i'||s'o'||s'u')
            vowels+=1;
    }

    printf("\nThe number of vowels in the string is %d",vowels);
    return 0;
}