//PROGRAM TO READ ARRAY OF 10 INTEGERS AND COUNT TOTAL NO OF ODD AND TOTAL NO OF EVEN ELEMENTS
#include<stdio.h>
int main()
{
  int num[10],even=0,odd=0;
  printf("Enter 10 numbers: ");
  for(int i=0;i<=9;i++)
  {
    scanf("%d", &num[i]);
    if(num[i]%2==0)
     even++;
    else
     odd++;
  }
  printf("The total number of even numbers are %d \nThe total number of odd numbers are %d", even, odd);   
  return 0;
}    
   