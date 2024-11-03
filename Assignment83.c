//WRITE A FUNCTION TO READ AN ARRAY AND FOUND OUT MAXIMUM

#include<stdio.h>

void read_array(int arr[], int size)
{
 printf("Enter the array elements: "); 
 for(int i=0;i<size;i++) 
  scanf("%d", &arr[i]);
}

int findmax(int arr[], int size)
{
 int max=arr[0];
 for(int i=0;i<size;i++)
  if(arr[i]>max)
   max=arr[i];
  return max;
}

int main()
{
 int n,max;
 printf("Enter the number of array elements: ");
 scanf("%d", &n);
 int a[n];
 read_array(a,n);
 max=findmax(a,n);
 printf("The maximum of the array is %d", max);
} 