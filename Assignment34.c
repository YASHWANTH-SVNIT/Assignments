//PROGRAM TO PRINT FIBONACCI SERIES (0,1,1,2,..)
#include<stdio.h>
int main()
{
  int n,t1=0,t2=1,fib;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("The fibonacci series upto %d terms is:");
  for(int i=1;i<=n;i++)
  {
    if(i==1)
        printf(" %d",t1);
    else if(i==2)
        printf(" %d",t2);
    else
    {
        fib=t1+t2;;
        printf("  %d", fib);
        t1=t2;
        t2=fib;
    }
  }
  return 0;
}
 