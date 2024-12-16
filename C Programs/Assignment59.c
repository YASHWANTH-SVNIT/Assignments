//PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDATION OF THOSE ARRAYS INTO THIRD
#include<stdio.h>
int main()
{ 
  int a[10],b[10],temp;
  printf("Enter the numbers in the first array: ");
  for(int i=0;i<10;i++)
   scanf("%d", &a[i]);
  printf("Enter the numbers in the second array: ");
  for(int i=0;i<10;i++)
   scanf("%d", &b[i]);
  for(int i=0;i<10;i++)
  {
   temp=a[i];
   a[i]=b[i];
   b[i]=temp;
  }
  printf("The arrays after swapping are \nFirst array: ");
  for(int i=0;i<10;i++)
   printf("%d ", a[i]);
  printf("\nSecond array: "); 
  for(int i=0;i<10;i++)
   printf("%d ", b[i]);
  return 0;
}