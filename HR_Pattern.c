#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("\n");

    int i;
    for(i=1;i<=n;i++)
    {
        int j,k;
        for(j=1;j<i;j++)
            printf("%d ",n-(j-1));
        for(k=j;k<n*2-1-(i-1);k++)
            printf("%d ",n-(j-1));
        for(int l=k;l<=n*2-1;l++)
        {
            printf("%d ",n-(j-1));
            j--;
        }
        printf("\n");
    }
    for(int a=i-2;a>0;a--)
    {
        int j,k;
        for(j=1;j<a;j++)
            printf("%d ",n-(j-1));
        for(k=j;k<n*2-1-(a-1);k++)
            printf("%d ",n-(j-1));
        for(int l=k;l<=n*2-1;l++)
        {
            printf("%d ",n-(j-1));
            j--;
        }
        printf("\n");
    }
}