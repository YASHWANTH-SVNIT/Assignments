//PROGRAM TO SORT (SELECTION SORT) AN ARRAY. 
#include<stdio.h>
int main()
{
  int n,min,temp;
  printf("How many numbers do you want to enter? ");
  scanf("%d", &n);
  int a[n];
  printf("Enter the numbers: ");
  for(int i=0;i<n;i++)
    scanf("%d", &a[i]);
  for(int i=0;i<n;i++)
  {
   min=i;
   for(int j=i;j<n;j++)
   {
    if(a[j]<a[min])
     min=j;
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
   } 
  }
  printf("The array after sorting is ");
  for(int i=0;i<n;i++)
   printf("%d ", a[i]);
  return 0;
}   