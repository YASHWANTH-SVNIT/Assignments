//WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD. 

#include<stdio.h>

void even_or_odd(int number)
{
 if(number%2==0)
  printf("%d is an even number",number);
 else
  printf("%d  is an odd number",number);
}

int main()
{
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);
  even_or_odd(num);
  return 0;
}  