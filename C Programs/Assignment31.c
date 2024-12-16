//PROGRAM TO PRINT THE SUM OF DIGITS OF A NO
#include<stdio.h>
int main()
{ 
  int num,count,temp,i,add;
  printf("Enter the number: ");
  scanf("%d",&num);
  temp=num,count=0,add=0;
  while(temp!=0)
  {
   temp/=10;
   count++;
  }
  temp=num;
  while(count>0)
  { 
   i=temp%10;
   add=add+i;
   count--;
   temp/=10;
  }
  printf("The sum of the digits of the given number is %d", add );
  return 0;
}
