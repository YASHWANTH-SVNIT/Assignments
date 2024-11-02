//PROGRAM TO READ ARRAY OF 10 INTEGERS AND PRINT SUM OF NUMBERS
#include<stdio.h>
int main()
{
  int num[10],sum=0;
  printf("Enter 10 numbers: ");
  for(int i=0;i<=9;i++)
  {
    scanf("%d", &num[i]);
    sum+=num[i];
  }
  printf("The sum of the numbers is %d", sum);
  return 0;
}    
   