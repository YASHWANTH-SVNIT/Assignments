//WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING POINTERS.
//FOR EXAMPLE, ST =”SVNITJAVA” IS COPIED AS “AVAJTINVS” 

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100],j=0;
    printf("Enter the string: ");
    scanf(" %[^\n]s",str1);
    int n=strlen(str1);
    char *ptr=str1;
    for(char i=n-1;i>=0;i--)
    {
        str2[j]=*(ptr+i);    
        j++;
    }
    str2[j]='\0';
    printf("The reverse of the string is %s",str2);
    return 0;
}