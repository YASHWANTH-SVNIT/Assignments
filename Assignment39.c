//PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!+......N/N!
#include<stdio.h>
float fact(int a)
{
    float res;
    if(a==1)
        return 1;
    else
    {
        res=a*fact(a-1);
    }  
    return res;  
}
int main()
{
  int n;
  float result=0;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  for(int i=1;i<=n;i++)
  {
    printf("%d/%d!+", i, i);
    result+=i/fact(i);
  }
  printf(" =%f ",result);
  return 0;
}