//PROGRAM TO PRINT 1,4,9,16,25,36,....,N
#include<stdio.h>
int main()
{
  int n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  for(int i=1;i<=n;i++) 
   printf("%d  ", i*i);
  return 0;
}