//PROGRAM TO READ THREE NOS. AND PRINT MAX USING LOGICAL OPERATOR(&&)
#include<stdio.h>
int main()
{ int a,b,c,max;
  printf("Enter the three numbers: ");
  scanf("%d%d%d", &a,&b,&c);
  if(a>b&&a>c)
   max=a;
  else if(b>a&&b>c)
   max=b;
  else 
   max=c;  
  printf("The greatest number among the three is %d", max);         
  return 0;
}