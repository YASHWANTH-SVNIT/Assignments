//PROGRAM TO CONVERT TEMPERTURE FROM FAHRENHEIT TO CENTIGRADE DEGREE
#include<stdio.h>
int main()
{
  float fr,cd;
  printf("Enter the temperature in fahrenheit: ");
  scanf("%f",&fr);
  cd=((fr-32)*5)/9;
  printf("The temperature in degree centigrade is %f", cd);
  return 0;
}