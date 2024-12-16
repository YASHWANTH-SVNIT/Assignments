/*Given are one dimensional arrays A and B which are sorted in ascending order. Write a program to merge them into a single sorted array C that contains every 
item form array A and B, in ascending order.*/

#include<stdio.h>
int main()
{
  int n1,n2,i=0,j=0,k=0;
  
  printf("Enter size of Array 1: ");
  scanf("%d", &n1);
  int a[n1];
  printf("Enter the sorted array 1: ");
  for(int i=0;i<n1;i++)
    scanf("%d", &a[i]);
 
  printf("\nEnter size of Array 2: ");
  scanf("%d", &n2);
  int b[n2];  
  printf("Enter the sorted array 2: ");
  for(int i=0;i<n2;i++)
    scanf("%d", &b[i]);  

  int c[n1+n2];  
  while(i<n1&&j<n2)
  {
   if(a[i]<b[j])
   {
    c[k]=a[i];
    i++;
   } 
   else
   {
    c[k]=b[j];
    j++;
   }    
   k++;
  }
  while(i<n1)
  {
   c[k]=a[i];
   k++,i++;
  } 
  while(j<n2)
  {
   c[k]=b[j];
   k++,j++;
  }  
  printf("\nThe 3rd sorted array combining other 2 arrays is\n");
  for(int i=0;i<n1+n2;i++)
   printf("%d ", c[i]); 
  return 0; 
}
