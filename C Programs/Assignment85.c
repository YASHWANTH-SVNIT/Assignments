//WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT

#include<stdio.h>

#define C ch==

int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    if(C'A'||C'E'||C'I'||C'O'||C'U'||C'a'||C'e'||C'i'||C'o'||C'u')
        printf("The character is an vowel.");
    else
        printf("The character is not an vowel");
    return 0;
}
