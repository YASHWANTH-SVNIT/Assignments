//WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES USING POINTERS

#include<stdio.h>

int size_inc_ws(char *);
int size_exc_ws(char *);

int main()
{
    char str[1000];
    printf("Enter the string: ");
    scanf(" %[^\n]s",&str);
    char *ptr;
    printf("\nThe length of the given string including whitespaces is %d",size_inc_ws(str));
    printf("\nThe length of the given string excluding whitespaces is %d",size_exc_ws(str));
    return 0;
}

int size_inc_ws(char *ptr)
{
    int size=0;
    for(int i=0;*(ptr+i)!='\0';i++)
        size++;
    return size;
}

int size_exc_ws(char *ptr)
{
    int size=0;
    for(int i=0;*(ptr+i)!='\0';i++)
    {
        if(*(ptr+i)==' ')
            continue;
        else 
            size++;
    }
    return size;
}
