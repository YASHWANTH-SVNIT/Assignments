//WRITE A C PROGRAM  USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING. 

#include<stdio.h>

int main()
{
    char str[1000];
    printf("Enter a string: ");
    scanf(" %[^\n]s", str);

    char *ptr = str;
    int words = 0;
    int inword=0;
    while(*ptr!='\0')
    {
        if(*ptr==' ')
        {
            ptr++;
            inword=0;
            continue;
        }
        else if(inword!=1)
        {
            inword=1;
            words++;
        }   
        ptr++;
    }
    printf("\nThe string contains %d words", words);
    return 0;
}
