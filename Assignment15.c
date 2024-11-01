//PROGRAM TO READ MARKS OF FIVE SUBJECTS AND PRINT SECURED DIVISION
#include<stdio.h>
int main()
{ int m1,m2,m3,m4,m5,t;
  float per;
  printf("Enter the marks of 5 subjects(out of 100):\n");
  scanf("%d%d%d%d%d", &m1,&m2,&m3,&m4,&m5);
  t=m1+m2+m3+m4+m5;
  per=t/5;
  printf("The percentage obtained is %f", per);
  if(per>=60)
   printf("\nDivison: 1st Divison");
  else if(per<60&&per>=50)
   printf("\nDivision: 2nd Divison");
  else if(per<50&&per>=30)
   printf("\nDivison: 3rd DiviSion");
  else 
   printf("The student has failed");   
  return 0;
}