//WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY X AND Y

#include<stdio.h>

int swap(int *x,int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}  
  
int main()
{
 int x,y;
 printf("Enter the 2 numbers: ");
 scanf("%d %d",&x,&y);
 printf("\nThe numbers before swapping are: %d %d", x, y);
 swap(&x,&y);
 printf("\nThe numbers after swapping are: %d %d", x, y);
 return 0;
}

