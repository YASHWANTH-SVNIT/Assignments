//PROGRAM TO READ A 3*3 MATRIX AND PRINT SUM OF ALL ROWS.  
#include<stdio.h>
int main()
{
  int a[3][3],sum;
  printf("Enter the elements of the matrix: ");
  for(int i=0;i<3;i++)
  { 
   for(int j=0;j<3;j++)
    scanf("%d", &a[i][j]);
  }  
  for(int j=0;j<3;j++)
  { 
   sum=0;
   for(int i=0;i<3;i++)
    sum+=a[i][j];
   printf("\nSum of Row %d: %d",j+1,sum); 
  }  
  return 0;
}     
        