//PROGRAM TO READ TIME IN HRS,MIN,SEC AND CONVERT INTO TOTAL SECONDS
#include<stdio.h>
int main()
{
  int hr,min,sec,S;
  printf("Enter time in Hours Minutes Seconds: ");
  scanf("%d%d%d", &hr,&min,&sec);
  S=(hr*60*60)+(min*60)+sec;
  printf("The time in seconds is %d", S);
  return 0;
}