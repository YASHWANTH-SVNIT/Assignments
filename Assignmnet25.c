//PROGRAM TO PRINT TABLE OF ANY NO.
#include<stdio.h>
int main()
{
 int a,i=1; 
 printf("Enter the number whose table you want to print: ");
 scanf("%d",&a);
 while(i<=10) 
 {printf("%dx%d",a,i); 
 printf("=%d\n",a*i); 
 i++;}
 return 0;
} 