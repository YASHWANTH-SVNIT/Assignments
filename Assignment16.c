//PROGRAM TO READ THREE NOS. AND PRINT MAX
#include<stdio.h>
int main()
{ int a,b,c,max;
  printf("Enter the three numbers: ");
  scanf("%d%d%d", &a,&b,&c);
  if(a>b)
   { if(a>c)
     max=a;
    else
     max=c;
   }
  else
   { if(b>c)
      max=b;
     else
      max=c;
   }
  printf("The greatest number among the three is %d", max);         
  return 0;
}