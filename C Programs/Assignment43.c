//PROGRAM TO CALCULATE THE COMMISSION FOR A SALES REPRESENTATIVE
#include<stdio.h>
int main()
{ 
  float sales,comm;
  printf("Enter the sales amount: ");
  scanf(" %f", &sales);
  if(sales>=0)
  {
   if(sales<=500)
    comm=sales*0.05;
   else if(sales>500&&sales<=2000)
    comm=35+(sales-500)*0.1;
   else if(sales>2000&&sales<=5000)
    comm=185+(sales-2000)*0.12;
   else if(sales>5000)
    comm=sales*0.125;
   printf("The commission for the sales representative is %f", comm); 
  }
  else
   printf("Please Enter the correct sales amount");
  return 0;  
}