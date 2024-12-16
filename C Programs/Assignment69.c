//PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY. 
#include<stdio.h>
int main()
{
  int n,pos=-1,ele;
  printf("How many numbers do you want to enter? ");
  scanf("%d", &n);
  int a[n];
  printf("Enter the numbers: ");
  for(int i=0;i<n;i++)
    scanf("%d", &a[i]);
  printf("Enter the element to be searched: ");
  scanf("%d", &ele);
  for(int i=0;i<n;i++)
   if(a[i]==ele)
    pos=i;
  if(pos==-1)
   printf("Element is not present in the array.");
  else 
   printf("The element is at the position %d in the array.",pos);  
  return 0;
}     
        