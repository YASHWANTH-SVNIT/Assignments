/*PROGRAM TO PRINT
    1
   12
  123
 1234
12345
*/
#include<stdio.h>
int main()
{
  int rows,i,j,k;
  printf("Enter the number of rows: "); scanf("%d", &rows);
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
   printf("\n");
  } 
  return 0;
}