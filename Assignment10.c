//PROGRAM TO CALCULATE CUTOFF MARK OF A STUDENT
#include<stdio.h>
int main()
{
  int cm,m,p,c,e;
  printf("Enter the marks in Mathematics out of 200: ");
  scanf("%d", &m);
  printf("Enter the marks in Chemistry out of 200: ");
  scanf("%d", &c);
  printf("Enter the marks in Physics out of 200: ");
  scanf("%d", &p);
  printf("Enter the marks in Entrance examination out of 100: ");
  scanf("%d", &e);
  cm=m/2+p/2+c/2+e;
  printf("The cutoff marks of the student is %d", cm);
  return 0;
}