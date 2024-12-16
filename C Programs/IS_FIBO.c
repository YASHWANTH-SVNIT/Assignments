#include<stdio.h>
#include<math.h>

/*IS FIBO
  You are given an integer,N.Write a program to determine if N is an element of the Fibonacci Sequence.
  The first few elements of fibonacci sequence are 0,1,1,2,3,5,8,13.... A fibonacci sequence is one where
  every element is a sum of the previous two elements in the sequence. The first two elements are 0 and 1.*/
  
int fibo(int);
int isfibo(int);

int main()
{
  int T,N;
  input1: printf("Enter the number of the test cases: ");
  scanf("%d",&T);
  
  if(T<1||T>pow(10,5))
  {
    printf("Number of test cases should be >0 & <10^5\n");
    goto input1;
  }

  for(int i=1;i<=T;i++)
  {
    printf("\nTest case %d\n",i);
    printf("Enter the number: ");
    scanf("%d",&N);
    isfibo(N);
  }
  return 0;
}

int fibo(int n)
{
  if(n==0)
    return 1;
  else if(n==1)
    return 1;
  else
    return fibo(n-1)+fibo(n-2);
}

int isfibo(int n)
{
  int i=0;
  while(1)
  {
    if(n==fibo(i))
    {
      printf("Is Fibo\n");
      return 0;
    }
    if(fibo(i)>n)
    {
      printf("Is not Fibo\n");      
      return 0;
    }
    i++;
  }
}