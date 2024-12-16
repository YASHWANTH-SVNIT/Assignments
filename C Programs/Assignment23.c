//PROGRAM TO READ TWO NOS. AND CALCULATE POWER WITHOUT USING MATH.H
#include<stdio.h>
int main()
{ int base,exp,res,i;
  printf("Enter the base: ");
  scanf("%d", &base);
  printf("\nEnter the exponent: ");
  scanf("%d", &exp);
  res=1;
  for(i=1;i<=exp;i++)
   res=res*base;
  printf("\nThe value is %d", res);
  return 0;       
}