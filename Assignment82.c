// WRITE A FUNCTION TO CALCULATE (NCR) FACTORIAL OF A GIVEN NUMBERS. NCR = (!N/(!R*!(N-R)))

#include<stdio.h>

long long fact(int n)
{
 if(n==0)
  return 1;
 else
  return n*fact(n-1);
}  

int main()
{
  int N,R;
  printf("\"To find NCR\"\n");
  printf("Enter the value of n: ");
  scanf("%d",&N);
  printf("Enter the value of r(<=n): ");
  scanf("%d",&R);
  if(R>N)
  {
    printf("Error! WRONG INPUT (r cannot be greater than n)");
    return 0;
  }
  printf("%dC%d= %lld",N,R,fact(N)/(fact(R)*fact(N-R)));
  return 0;
}

