//PROGRAM TO FIND VALUE OF Y FOR DIFF CONDTIONS
#include<stdio.h>
#include<math.h>
int main()
{
 int n,x;
 float y;
 printf("Enter the value of x: ");
 scanf("%d",&x);
 printf("\nEnter the value of n: "); scanf("%d", &n);
 if(n==1)
  y=1+x;
 else if(n==2)
  y=1+(x/n);
 else if(n==3)
  y=1+pow(x,n);
 else if(n>3||n<1)
  y=1+(n*x);
 else
  printf("\nEnter a valid value of n");
 printf("\nThe value of y is %lf", y); return 0;
}