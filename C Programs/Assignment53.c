/*PROGRAM TO PRINT
   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include<stdio.h>
 int main()
{
 int rows,i,j,k,m;
 printf("Enter the number of rows: ");
 scanf("%d", &rows);
 for(i=1 ;i<=rows;i++)
 {
  for(k=i;k<rows;k++)
   printf(" ");
  for(j=1;j<=i;j++)
   printf("%c", '*');
  for (m=1;m<i;m++)
   printf("%c", '*');
  printf("\n");
 }
 for(i=rows-1;i>=1;i--)
 {
  for(k =i;k<rows;k++)
   printf(" ");
  for(j=i;j>=1;j--)
   printf("%c", '*');
  for(m=1;m<i;m ++)
   printf("%c", '*');
  printf("\n");
 }
 return 0;
} 