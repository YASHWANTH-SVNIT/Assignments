//PROGRAM TO READ AN ARRAY AND PRINT THE OCCURRENCE OF ANY PARTICULAR ELEMENT IN THE ARRAY. 
#include<stdio.h>
int main()
{
  int n,count=0,ele;
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
    count++;
  if(count==0)
   printf("Element is not present in the array.");
  else 
   printf("The element occurs %d times in the array",count);  
  return 0;
}     
        