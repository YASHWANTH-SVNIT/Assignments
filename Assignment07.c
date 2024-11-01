//PROGRAM TO CALCULATE AREA OF TRIANGLE
#include<stdio.h>
#include<math.h>
int main()
{
  float s,a,b,c,A;
  printf("Enter the three sides of traingle: ");
  scanf("%f%f%f", &a,&b,&c);
  s=(a+b+c)/2;
  A=sqrt(s*s*(s-a)*(s-b)*(s-c));
  printf("The area of triangle is %f", A);
  return 0;
}