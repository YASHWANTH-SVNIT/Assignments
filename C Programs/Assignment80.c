//WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI NUBERS. TEST THE FUNCTION FOR N=5,10,AND 15.

#include<stdio.h>

int fibonacci(int n)
{
  if(n==0)
   return 0;
  else if(n==1)
   return 1;
  else 
   return fibonacci(n-1)+fibonacci(n-2);
}  
  
int main()
{
 int terms;
 printf("Enter the number of terms: ");
 scanf("%d",&terms);
 printf("The fibonacci series is ");
 for(int i=0;i<terms;i++)
  printf(" %d",fibonacci(i));
 return 0;
}

  