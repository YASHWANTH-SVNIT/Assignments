//PROGRAM TO READ TOTAL SECONDS AND CONVERT IT INTO TIME
#include<stdio.h>
int main()
{
  int S,hr,min,sec;
  printf("Enter the time in toatal seconds: ");
  scanf("%d", &S);
  hr=S/(60*60);
  min=(S-(hr*60*60))/60;
  sec=S-(hr*60*60)-(min*60);
  printf("The time is %d:%d:%d", hr,min,sec);
  return 0;
}