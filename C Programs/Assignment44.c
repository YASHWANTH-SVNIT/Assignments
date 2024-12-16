//PROGRAM FOR AMOUNT TO BE PAID BY CUSTOMER TO ELECTRICAL DISTRIBUTION COMPANY
#include<stdio.h>
int main()
{
  int units;
  float amount;
  printf("Enter the units consumed: ");
  scanf("%d", &units);
  if(units>0)
  {
    if(units>0&&units<=200)
     amount=units*0.5;
    else if(units>=201&&units<=400)
     amount=100+(units-200)*0.65;
    else if(units>=401&&units<=600)
     amount=230+(units-400)*0.8;
    else if(units>600)
     amount=425+(units-600)*1.25;
    printf("The amount to be paid by the consumer is %f", amount);
  } 
  else
   printf("Please Enter the correct number of units");
  return 0;
}