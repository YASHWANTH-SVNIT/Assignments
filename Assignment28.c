//PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT
#include<stdio.h>
#include<math.h>
int main()
{
  int n,temp,i,count;
  double a;
  printf("Enter a number: ");
  scanf("%d",&n);
  a=0,temp=n,count=0;
  while(temp!=0)
  {
    temp/=10;
    count++;
  }
  temp=n;
  while(temp!=0)
  { 
    i=temp%10;
    a=a+pow(i,count);
    temp/=10;
  }  
  if(a==n)
    printf("The given number is an armstrong number");
  else
    printf("The given number is not an armstrong number");
  return 0;
}