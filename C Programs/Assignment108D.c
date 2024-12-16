//D. REVERSE A GIVEN STRING 

#include<stdio.h>

char *rev_string(char *,int);

int main()
{
    char str[100];
    int size=0;
    printf("Enter the string: ");
    scanf(" %[^\n]s",str);
    
    for(int i=0;str[i]!='\0';i++)
        size++;

    printf("\nOriginal string: %s",str);
    printf("\nReverse of the string: %s",rev_string(str,size));
    return 0;
}

char *rev_string(char *ptr,int n)
{
    char temp;
    for(int i=0;i<n/2;i++)
    {
        temp=*(ptr+i);
        *(ptr+i)=*(ptr+n-1-i);
        *(ptr+n-1-i)=temp;
    }
    return ptr;
}