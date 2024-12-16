//BIGGER IS GREATER
/*Given a word rearrange the letters of to construct 
another word in such a way that,
is lexicographically greater than .*/

#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
   int T,size;
   input1: printf("Enter number of test cases: ");
   scanf("%d",&T);

   if(T<1||T>pow(10,5))
   {
      printf("Number of test cases must be >0 & <10^5\n");
      goto input1;
   }
   
   char word[100],temp;
   for(int i=1;i<=T;i++)
   {
      int flag=-1,loops;
      input2: printf("\nTest Case %d",i);
      printf("\nEnter the word: ");
      scanf("%s",&word);
      size=strlen(word);

      for(int j=0;(size-1-j)!=0;j++)
      {
         if(word[size-2-j]<word[size-1-j])
         {
            temp=word[size-2-j];
            word[size-2-j]=word[size-1-j];
            word[size-1-j]=temp;
            flag=size-2-j;
            break;
         }
      }
      if(flag==-1)
      {
         printf("No Answer\n");
         continue;
      }
      loops=(size-flag-1)/2;
      for(int j=flag+1;loops!=0;j++)
      {
         int k=0;
         temp=word[j];
         word[j]=word[size-1-k];
         word[size-1-k]=temp;
         k++;
         loops-=1;
      }
      printf("The lexographically greater word is %s\n",word);
   }
   return 0;
}

