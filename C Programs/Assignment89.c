//)WRITE A PROGRAM  TO COPY  ONE ARRAY INTO ANOTHER ARRAY. ORDER OF ELEMENTS OF SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of array elements you want: ");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    printf("Enter the elements of 1st array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
        arr2[n-1-i]=arr1[i];
    }
    printf("The elements of 2nd array are: ");
    for(int i=0;i<n;i++)
        printf("%d ",arr2[i]);
    return 0;
}