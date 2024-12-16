/*An election is contested by 5 candidates. The candidate is numbered are 1 to 5 
and the voting is done by marking the candidate number on the ballot paper. 
Write a program to read the ballots and count the votes cast for each candidate 
using an array variable count. In case, a number, read is outside the range 1 to 5, 
the ballot should be considered as a ‘spoilt ballot’ and the program should also 
count the number of spoilt ballots.*/

#include<stdio.h>
int main()
{
  int b,count[6]={0,0,0,0,0,0},votes;
  printf("How many ballet papers? ");
  scanf("%d", &b);
  printf("Enter the numbers on the ballot paper: ");
  for(int i=1;i<=b;i++)
  { 
    scanf("%d", &votes);
    switch(votes)
    {
     case 1:{
             count[0]++;
             break;
            }
     case 2:{
             count[1]++;
             break;
            }  
     case 3:{
             count[2]++;
             break;
            }       
     case 4:{
             count[3]++;
             break;
            }
     case 5:{
             count[4]++;
             break;
            }  
     default: count[5]++;
    } 
  }
  for(int i=0;i<5;i++)
   printf("\nThe number of votes for candidate %d is %d", i+1, count[i]);  
  printf("\nThe number of spoilt ballot votes are %d", count[5]);
  return 0; 
}