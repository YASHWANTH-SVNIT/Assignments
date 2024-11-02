/*PROGRAM TO PRINT
A
BB
CCC
DDDD
EEEEE
*/
#include<stdio.h>
int main()
{
  int rows, i,j;
  char alp='A';
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  for(i=1;i<=rows;i++)
 {
  for(j=1;j<=i;j++) 
   printf("%c", alp);
  printf("\n");
  alp++;
 }
 return 0;
}