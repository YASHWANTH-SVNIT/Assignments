//PROGRAM TO REVERSE AN ARRAY. 
#include<stdio.h>
int main()
{
  int n,temp;
  printf("How many numbers do you want to enter? ");
  scanf("%d", &n);
  int a[n];
  printf("Enter the numbers: ");
  for(int i=0;i<n;i++)
   scanf("%d", &a[i]);
  printf("The array before reversing is: ");
  for(int i=0;i<n;i++)
   printf("%d ", a[i]); 
   for(int i=0;i<n/2;i++)
   {
    temp=a[i];
    a[i]=a[n-1-i];
    a[n-1-i]=temp;
   }
  printf("\nThe array after reversing is: ");
  for(int i=0;i<n;i++)
   printf("%d ", a[i]);
  return 0;
}         
        