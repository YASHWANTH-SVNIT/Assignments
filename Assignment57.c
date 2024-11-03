//PROGRAM TO READ N NOS AND FINDOUT MAX AND SECOND MAX. 
#include<stdio.h>
int main()
{
  int n,max,smax;
  printf("How many numbers do you want to enter? ");
  scanf("%d", &n);
  int a[n];
  printf("Enter the numbers: ");
  for(int i=0;i<n;i++)
    scanf("%d", &a[i]);
  max=a[0];
  for(int i=0;i<n;i++)
  { 
    if(a[i]>max)
     max=a[i];
  }
  if(max==a[0])
   smax=a[1];
  else
   smax=a[0]; 
  for(int i=0;i<n;i++)
  {
    if(a[i]>smax&&a[i]<max)
     smax=a[i];
  }  
  printf("The largest number is %d \nThe second largest number is %d", max,smax);
  return 0;
}     
        