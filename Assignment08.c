//PROGRAM TO CONVERT 31558150 SECONDS INTO NUMBER OF DAYS,HOURS AND MINUTES
#include<stdio.h>
int main()
{
  int sec,d,h,m,rem;
  sec=31558150;
  d=sec/(60*60*24);
  rem=sec%(60*60*24);
  h=rem/(60*60);
  rem=rem%(60*60);
  m=rem/60;
  printf("31558150 seconds is %d",d);
  printf(" days %d", h);
  printf(" hours %d", m);
  printf(" minutes");
  return 0;
}