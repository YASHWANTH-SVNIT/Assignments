//PROGRAM TO READ THREE NOS. AND PRINT MAX USING CONDITIONAL OPERATOR(? :)
#include<stdio.h>
int main()
{ int a,b,c,max;
  printf("Enter the three numbers: ");
  scanf("%d%d%d", &a,&b,&c);
  if(a>b)
   max=((a>c)?a:c);
  else
   max=((b>c)?b:c); 
  printf("The greatest number among the three is %d", max);         
  return 0;
}