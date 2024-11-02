//PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NOS. B/W 1 TO N 
#include<stdio.h>
int main()
{
  int n,i, sum_odd, sum_even;
  printf("Enter the value of n: ");
  scanf("%d",&n);
  i=1;
  sum_odd=0;
  sum_even=0;
  while(i<=n)
  {
   if(i%2==0)
    sum_even=sum_even+i; 
   else
    sum_odd=sum_odd+i;
   i++;
  }
  printf("\nThe sum of all odd numbers from 1 to %d", n); printf(" is %d", sum_odd);
  printf("\nThe sum of all even numbers from 1 to %d",n);
  printf(" is %d", sum_even);
  return 0;
}  