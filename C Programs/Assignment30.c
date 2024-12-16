//PROGRAM TO PRINT A REVERSE OF A NO
#include<stdio.h>
int main()
{ 
  int num,i,rev;
  printf("Enter the number: ");
  scanf("%d",&num);
  rev=0;
  while(num!=0)
  { 
   i=num%10;
   rev=rev*10+i;
   num/=10;
  }
  printf("The reverse of the given number is %d", rev );
  return 0;
}

