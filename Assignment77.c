//WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT. 

#include<stdio.h>

void palindrome(int num)
{
  int temp,i,pal;
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
}

int main()
{ 
  int number;
  printf("Enter the number: ");
  scanf("%d",&number);
  palindrome(number);
  return 0;
}  


