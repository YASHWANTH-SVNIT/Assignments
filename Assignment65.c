//PROGRAM TO READ A 3*3 MATRIX AND PRINT ITS TRANSPOSE. 
#include<stdio.h>
int main()
{
  int a[3][3],temp;
  printf("Enter the elements of the matrix:\n");
  for(int i=0;i<3;i++)
  { 
   for(int j=0;j<3;j++)
    scanf("%d", &a[i][j]);
  }  
  for(int i=0;i<3;i++)
  { 
   for(int j=i+1;j<3;j++)
   {
     temp=a[j][i];
     a[j][i]=a[i][j];
     a[i][j]=temp;
   }
  } 
  printf("The transpose of the matrix is:\n");
  for(int i=0;i<3;i++)
  { 
   for(int j=0;j<3;j++)
     printf("%d  ", a[i][j]);
   printf("\n");  
  }  
  return 0;
}     
        