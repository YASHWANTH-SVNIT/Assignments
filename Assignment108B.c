//B. COMPARE TWO STRINGS 

#include<stdio.h>
#include<string.h>

int strcompare(char *str1,char *str2)
{
    int result=0;
    for(int i=0;str1[i]!='\0'||str2[i]!='\0';i++)
    {
        if(str1[i]>str2[i])
            result=str1[i]-str2[i];
        else if(str1[i]<str2[i])
            result=str1[i]-str2[i];
    }
    return result;
}

int main()
{
    char str1[100],str2[100];
    printf("Enter the 1st string: ");
    fgets(str1,100,stdin);
    printf("Enter the 2nd string: ");
    fgets(str2,100,stdin);
    
    printf("\nUsing string.h: %d",strcmp(str1,str2));
    printf("\nWithout using string.h: %d",strcompare(str1,str2));

    return 0;
}

