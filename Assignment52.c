/*PROGRAM TO PRINT
   1
  121
 12321
1234321
*/
#include<stdio.h>
 int main()
{
 int rows,i,j,k,m;
 printf("Enter the number of rows: ");
 scanf("%d", &rows);
 for(i=1;i<=rows;i++)
 {
  for(k=i;k<rows;k++)
   printf(" ");
  int num=1;
  for(j=1;j<=i;j++)
  {
   printf("%d", num);
   num++;
  }
  num--;
  for(m=1;m<i;m++)
  {
   num--;
   printf("%d", num);
  }
  printf("\n");
 }
 return 0;
} 