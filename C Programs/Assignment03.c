//PROGRAM TO CALCULATE GROSS SALARY
#include<stdio.h>
int main()
{
  long int bs,da,ha,gs;
  printf("Enter the basic salary: ");
  scanf("%ld", &bs);
  da=(bs*5)/100;
  ha=(bs*10)/100;
  gs=bs+da+ha;
  printf("The gross salary is %ld", gs);
  return 0;
}