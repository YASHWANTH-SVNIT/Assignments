//WRITE A  C PROGRAM TO COUNT NUMBER OF CHARACTERS, WORDS AND LINES IN A TEXT FILE. 

#include<stdio.h>

int main()
{
    FILE *fptr=fopen("102.txt","r");
    int words=0,chars=0,lines=0;
    
    while(!feof(fptr))
    {   
        char text=getc(fptr);
        chars+=1;
    }

    rewind(fptr);

    while(!feof(fptr))
    {
        char text[100];
        fscanf(fptr,"%s",text);
        words+=1;
    }

    rewind(fptr);

    while(!feof(fptr))
    {
        char text[100];
        fgets(text,100,fptr);
        lines+=1;
    }

    printf("\nThe number of characters in the file are %d",chars);
    printf("\nThe number of words in the file are %d",words);
    printf("\nThe number of lines in the file are %d",lines);
    return 0;
}