//WITHOUT USING INBUILT STRING FUNCTIONS, PERFORM THE FOLLOWING IN C LANGUAGE: 

//A. COPY ONE STRING INTO ANOTHER 

#include<stdio.h>

void strcopy(char *,char *,int);

int main()
{
    char str1[100],str2[100];
    int size=0;
    printf("Enter the string: ");
    fgets(str1,100,stdin);
    for(int i=0;str1[i]!='\0';i++)
        size++;
    
    strcopy(str1,str2,size);
    printf("\nString 1: %s",str1);
    printf("String 2: %s",str2);
    
    return 0;
}

void strcopy(char *ptr1,char *ptr2,int n)
{
    int i;
    for(i=0;i<=n;i++)
        *(ptr2+i)=*(ptr1+i);
    *(ptr2+i)='\0';    
}