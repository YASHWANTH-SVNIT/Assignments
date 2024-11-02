//PROGRAM TO CHECK WHETHER A NO IS PALINDROME OR NOT
#include<stdio.h>
#include<math.h>
int main()
{ 
  int num,temp,i,pal;
  printf("Enter the number: ");
  scanf("%d",&num);
  temp=num,pal=0;
  while(temp!=0)
  { 
   i=temp%10;
   pal=pal*10+i;
   temp/=10;
  }
  if(pal==num)
   printf("The given number is a palindrome");
  else
   printf("The given number is not a palindrome");
  return 0;
}
