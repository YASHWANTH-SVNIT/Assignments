/*
The annual examination results of 10 students are tabulated as follows: 
Roll No.              
Subject1          
Subject2                          
Subject3 
Write a program to read the data and determine the following: 
(a)Total marks obtained by each student. 
(b)The highest marks in each subject and the Roll No. of the student who secured it. 
(c)The student who obtained the highest total marks. 
*/

#include<stdio.h>
int main()
{
  int a[10][4],total[10]={0,0,0,0,0,0,0,0,0,0},max;
  printf("Enter the Roll No,Subject 1 marks, Subject 2 marks, Subject 3 marks of 10 students:\n");   //INPUT
  for(int i=0;i<10;i++)
  {
    for(int j=0;j<4;j++)
     scanf("%d", &a[i][j]);
  }
  
  for(int i=0;i<10;i++)   //(a)TOTAL MARKS OBTAINED BY EACH STUDENTS
  {
    for(int j=1;j<4;j++)
     total[i]+=a[i][j];
    printf("\nThe total marks obtained by %d is %d", a[i][0],total[i]);
  }
  printf("\n");

  for(int j=1;j<4;j++)   //((b)The highest marks in each subject and the Roll No. of the student who secured it
  {
    max=a[0][j];
    printf("\nStudents who obtained highest marks in Subject %d is/are ",j);
    for(int i=0;i<10;i++)
    {
      if(a[i][j]>=max)
        max=a[i][j];
    }    
    for(int i=0;i<10;i++)
    {
     if(a[i][j]==max)
      printf("%d, ", a[i][0]);
    } 
    printf("Scoring %d", max);
  }
  printf("\n");

  max=total[0];      //(c)The students who obtained the highest total marks. 
  for(int i=0;i<10;i++)
  {
   if(total[i]>max)
     max=total[i];
  } 
  printf("\nStudents who scored highest total marks is/are ");
  for(int i=0;i<10;i++)
  {
   if(total[i]==max)
    printf("%d, ", a[i][0]);
  } 
  printf("Scoring %d", max);
 
  return 0;
}