//PROGRAM TO CALCULATE FACTORIAL OF A NO.
#include<stdio.h>
int main()
{ int num,i,fact;
  fact=1;
  printf("Enter the number: ");
  scanf("%d", &num);
  for(i=num;i>1;i--)
   fact=fact*i;
  printf("The factorial of %d", num);
  printf(" is %d", fact); 
  return 0;       
}