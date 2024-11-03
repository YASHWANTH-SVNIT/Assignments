//PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDATION OF THOSE ARRAYS INTO THIRD
#include<stdio.h>
int main()
{ 
  int a[10],b[10],c[10];
  printf("Enter the numbers in the first array: ");
  for(int i=0;i<10;i++)
   scanf("%d", &a[i]);
  printf("Enter the numbers in the second array: ");
  for(int i=0;i<10;i++)
   scanf("%d", &b[i]);
  for(int i=0;i<10;i++)
   c[i]=a[i]+b[i];
  printf("The addition of the 2 arryas is ");
  for(int i=0;i<10;i++)
    printf("%d ", c[i]);
  return 0;
}