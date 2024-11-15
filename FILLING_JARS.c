#include<stdio.h>

int main()
{
    int N,M,a,b,k,total=0,avg=0;
    
    label_1: scanf("%d %d", &N,&M);        //INPUTING VALUE OF N AND M
    if(N<3||N>10000000)
    {    printf("The number of jars must be 3<=N<=10^7\n");
        goto label_1;
    }    
    if(M<1||M>100000)
    {
        printf("The number of operations must be 1<=M<=10^5\n");
        goto label_1;
    }
    int jars[N];
    
    for(int i=0;i<N;i++)        // INTITIALISING JARS
    {
        jars[i]=0;
    }
   
    for(int i=1;i<=M;i++)     //FILLING THE JARS
    {
        label_2: scanf("%d %d %d",&a,&b,&k);
        if(a,b<1||a,b>N)
        {
            printf("The jars are numbered from 1 to %d\n", N);
            goto label_2;
        }
        if(k<0||k>1000000)
        {
            printf("The number of candies must be less than 10^6\n");
            goto label_2;
        }
        for(int j=a-1;j<=b-1;j++)
        {
            jars[j]+=k;
            total+=k;
        }
    }
   
    avg=total/N;
    printf("\n%d",avg);    
    return 0;
}