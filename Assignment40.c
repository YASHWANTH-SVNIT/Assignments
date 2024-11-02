//READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CACULATE SUM OF LIST OF NUMBERS READ
#include <stdio.h>
int main()
{
    int sum = 0, temp;
    printf("Enter the numbers:\n");
    while (1)
    {
        scanf("%d", &temp);
        if (temp < 0)
          break; // Exit if a negative number is entered
        sum+= temp;
    }
    printf("The sum of all the numbers is %d\n", sum);
    return 0;
}
