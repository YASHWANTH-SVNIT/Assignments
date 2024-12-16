#include<stdio.h>

int main()
{
    int N,k,count,gems=0;
    input: printf("Enter the number of rocks: ");
    scanf("%d",&N);
    
    if(N<1||N>100)
    {
        printf("The number of rocks must be >0 and <=100");
        goto input;
    }

    char comp[N][100];
    for(int i=0;i<N;i++)
    {
        printf("Enter rock %d's compostion: ",i+1);
        scanf(" %s",&comp[i]);
    }
    for(char j='a';j<='z';j++)
    {    
        count=0;
        for(int i=0;i<N;i++)
        {
            k=0;
            while(comp[i][k]!='\0')
            {
                if(j==comp[i][k])
                {
                    count++;
                    break;
                }
                k++;
            }        
        }
        if(count==N)
            gems++;
    }
    printf("\nNumber of gem elements in %d rocks are %d",N,gems);
    return 0;
}