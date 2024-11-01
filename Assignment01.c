#include<stdio.h>
int main() 
{
  float p,t,r,SI;
  printf("Enter the principal amount,time,rate of interest: \n");
  scanf("%f%f%f",&p,&t,&r);
  SI=(p*t*r)/100;
  printf("The simple interest is %f", SI);
  return 0;
}  