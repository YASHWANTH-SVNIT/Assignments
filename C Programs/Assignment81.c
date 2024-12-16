//WRITE A FUNCTION THAT RETURN 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURN ZERO OTHERWISE

#include<stdio.h>

int prime(int n)
{
 int count=0;
 for(int i=1;i<=n;i++)
  if(n%i==0)
   count++;
  if(count>2)
   return 0;   //Not a prime number 
  else
   return 1;  //Prime number 
}

int main()
{
  int num;
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("Result: %d",prime(num));
  return 0;
}

