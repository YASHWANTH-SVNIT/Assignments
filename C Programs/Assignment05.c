//PROGRAM TO SWAP TWO VARIABLES USING THIRD VARIABLE
#include<stdio.h>
int main()
{
  int a,b,temp;
  printf("Enter the two numbers: ");
  scanf("%d%d",&a,&b);
  printf("The two numbers before swapping is %d %d", a,b);
  temp=b;
  b=a;
  a=temp;
  printf("\nThe two numbers after swapping is %d %d", a, b);
  return 0;
}