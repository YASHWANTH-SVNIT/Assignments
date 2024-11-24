// IMPLEMENT A FUNCTION NAMED AS FLIP; WHICH WILL TAKE A NUMBER AS INPUT AND FLIP ITS LAST N DIGITS 

#include<stdio.h>

int flip(int,int);

int main()
{
    int num,n;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the number of digits to flipped from last: ");
    scanf("%d",&n);
    printf("\nThe reverse of the nuber is %d",flip(num,n));
    return 0;
}

int flip(int num,int n)
{
    for(int i=0;i<n;i++)
    {
        
    }
}