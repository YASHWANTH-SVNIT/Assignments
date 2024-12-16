//PROGRAM TO PRINT SUM OF DIGITS UPTO SINGLE DIGIT OF A NO N
#include<stdio.h>
int main() 
{
    int n, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n > 0 || sum > 9)
    {
        if (n == 0) 
        {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }
    printf("The sum of digits up to a single digit is %d\n", sum);
    return 0;
}
