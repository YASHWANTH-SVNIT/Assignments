/*PROGRAM TO PRINT
10000
01000
00100
00010
00001
*/
#include<stdio.h>
int main()
{
 int rows,i,j;
 printf("Enter the number of rows: ");
 scanf("%d", &rows);
 for(i=1;i<=rows;i++)
 {
  for(j=1;j<=rows;j++)
  {
   if(i==j)
    printf("%d", 1);
   else
    printf("%d", 0);
  }
  printf("\n");
 }
 return 0;
}