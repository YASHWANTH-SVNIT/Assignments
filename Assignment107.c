// IMPLEMENT A FUNCTION NAMED AS FLIP; WHICH WILL TAKE A NUMBER AS INPUT AND FLIP ITS LAST N DIGITS 

#include<stdio.h>
#include<math.h>

int flip(int,int);

int main()
{
    int num,n,digits=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the number of digits to flipped from last: ");
    scanf("%d",&n);

    int temp=num;
    while(temp!=0)
    {
        temp/=10;
        digits++;
    }

    printf("\nThe reverse of the number is %d",flip(num,n));
    return 0;
}

int flip(int num,int n)
{
    int temp=num;
    num=num/pow(10,n);

    for(int i=1;i<=n;i++)
    {
        int rem=temp%10;
        num=num*10+rem;
        temp/=10;
    }
    
    return num;
}