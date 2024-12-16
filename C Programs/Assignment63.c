//PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT. 
#include<stdio.h>
int main()
{
  int a[3][3],max,min;
  printf("Enter the elements of the matrix: ");
  for(int i=0;i<3;i++)
  { 
   for(int j=0;j<3;j++)
    scanf("%d", &a[i][j]);
  }  
  max=a[0][0];
  for(int i=0;i<3;i++)
  { 
   for(int j=0;j<3;j++)
   {
    if(a[i][j]>max)
     max=a[i][j];
   }  
  }  
  min=a[0][0];
  for(int i=0;i<3;i++)
  { 
   for(int j=0;j<3;j++)
   {
    if(a[i][j]<min)
     min=a[i][j];
   }  
  } 
  printf("The maximum element is %d \nThe minimum element is %d", max,min);
  return 0;
}     
        