//C. CONCAT TWO STRINGS 

#include<stdio.h>
#include<string.h>

char *strconcat(char *,char *,int);

int main()
{
    char str1[100],str2[200];
    int size1=0,size2=0;

    printf("Enter the string 1: ");
    scanf(" %[^\n]s",str1);
    printf("Enter the string 2: ");
    scanf(" %[^\n]s",str2);

    for(int i=0;str2[i]!=0;i++)
        size2++;

    printf("\nUsing String.h: %s",strcat(str2,str1));
    printf("\nWithout using string.h: %s", strconcat(str1,str2,size2));
}

char *strconcat(char *str1,char *str2,int n2)
{
    int i;
    for(i=0;str1[i]!='\0';i++)
    {
        str2[n2+i]=str1[i];
    }
    str2[n2+i]='\0';
    return str2;
}