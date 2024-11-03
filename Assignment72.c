//Write a program in C to rotate an array by N positions. 
#include<stdio.h>
int main()
{
  int size,n,temp;
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  int a[size];
  printf("Enter the numbers in the array: ");
  for(int i=0;i<size;i++)
    scanf("%d", &a[i]);
  printf("Enter the number of positions to be rotated: ");
  scanf("%d", &n);
  for(int i=1;i<=n;i++)
  {
   temp=a[0];
   for(int j=0;j<size;j++)
   {
    if(j!=size-1)
     a[j]=a[j+1];
    else
     a[j]=temp;
   } 
  }   
  printf("The rotated array is  ");
  for(int i=0;i<size;i++)
   printf("%d  ", a[i]);
  return 0;
}     
        