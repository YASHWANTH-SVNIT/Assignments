//PROGRAM TO READ A 3*3 MATRIX AND ADD THEIR VALUE AND STORE THEM IN THIRD MATRIX. 
#include<stdio.h>
int main()
{
  int a[3][3],b[3][3],c[3][3];
  printf("Enter the elements of the matrix 1:\n");
  for(int i=0;i<3;i++)
  { 
   for(int j=0;j<3;j++)
    scanf("%d", &a[i][j]);
  }  
  printf("Enter the elements of the matrix 2:\n");
  for(int i=0;i<3;i++)
  { 
   for(int j=0;j<3;j++)
    scanf("%d", &b[i][j]);
  }  
  for(int i=0;i<3;i++)
  { 
   for(int j=0;j<3;j++)
    c[i][j]=a[i][j]+b[i][j];
  }  
  printf("The matrix with sum of other 2 matrices is:\n");
  for(int i=0;i<3;i++)
  { 
   for(int j=0;j<3;j++)
    printf("%d  ", c[i][j]);
   printf("\n"); 
  }  
  return 0;
}     
        