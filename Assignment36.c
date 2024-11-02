//PROGRAM TO PRINT 1,3,5,7,9,.....,N
#include<stdio.h>
int main()
{
  int n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  for(int i=0;i<n;i++) 
   printf("%d  ", 1+2*i);
  return 0;
}