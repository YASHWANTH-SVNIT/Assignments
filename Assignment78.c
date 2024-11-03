//WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OT NOT. 

#include<stdio.h>
#include<math.h>

int armstrong(int n)
{  
  int temp,i,count;
  double a;
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
    temp=(temp-i)/10;
  }  
  if(a==n)
    printf("The given number is an armstrong number");
  else
    printf("The given number is not an armstrong number");
}

int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  armstrong(num);
  return 0;
}  
