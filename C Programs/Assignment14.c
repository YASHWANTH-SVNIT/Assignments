//PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL LETTER, SMALL LETTER,DIGIT OR A SPECIAL SYMBOL
#include<stdio.h>
int main()
{ 
  char c;
  printf("Enter the desired character: ");
  scanf(" %c", &c);
  if(c>=65&&c<=90)                                                                        //ASCII VALUE OF A IS 65 & Z IS 90
   printf("The given character is a Capital Letter");
  else if(c>=97&&c<=122)                                                                 //ASCII VALUE OF a IS 97 & z IS 122
   printf("The given character is a Small Letter");                                         
  else if(c>=48&&c<=57)                                                                 //ASCII VALUE OF 0 IS 48 & 9 IS 57
   printf("The given character is a digit");
  else if((c>=32&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126))            //SPECAIL CHARACTER ASCII VALUES
   printf("The given character is a special character");
  else 
   printf("Error! Enter a Capital Letter ,Small letter, digit or a special charaCter");  
  return 0;
}