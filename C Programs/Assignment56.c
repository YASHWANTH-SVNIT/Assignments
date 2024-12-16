//PROGRAM TO READ ARRAY OF 10 INTEGRS AND COUNT TOTAL NO OF POSITIVE,NEGATIVE,AND ZERO ELEMENTS
#include<stdio.h>
int main()
{
  int num[10],pos=0,neg=0,zero=0;
  printf("Enter 10 numbers: ");
  for(int i=0;i<=9;i++)
  {
    scanf("%d", &num[i]);
    if(num[i]>0)
     pos++;
    else if(num[i]==0)
     zero++;
    else
     neg++; 
  }
  printf("The total number of positive numbers are %d \nThe total number of negative numbers are %d \nThe number of zero elements are %d", pos, neg, zero);   
  return 0;
}    
   