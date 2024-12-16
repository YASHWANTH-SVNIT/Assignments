//READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE
#include<stdio.h>
#include<math.h>
int main()
{
 int n,count=0;
 printf("Enter the number: ");
 scanf("%d", &n);
 if (n <= 1) 
    {
        printf("The given number is not prime or composite.");
        return 0;
    }
 for(int i=1;i<=sqrt(n);i++)
 {
  if(n%i==0)
   count++;
  if(i!=n/i)
   count++;
 }
 if(count>2)
  printf("The given number is a composite number");
 else 
  printf("The given number is a prime number"); 
 return 0;
}