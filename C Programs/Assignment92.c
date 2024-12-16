//WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS. 

#include<stdio.h>

int main()
{
    int n;
    printf("How many numbers do you want to enter? ");
    scanf("%d",&n);
    int list[n],max;
    printf("Enter the list of numbers: ");
    for(int i=0;i<n;i++)
        scanf("%d",&list[i]);
    int *ptr=list;
    max=*ptr;
    for(int i=0;i<n;i++)
    {
        if(*(ptr+i)>max)
            max=*(ptr+i);
    }
    printf("The biggest number among the given numbers is %d",max);
    return 0;
}