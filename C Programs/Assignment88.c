//WRITE A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS.

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of arrray elements: ");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter the %d array elements: ",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr1[i]);
    
    int *ptr,arr2[n];
    ptr=arr1;
    for(int i=0;i<n;i++)
    {
        arr2[i]=*(ptr+i);
    }
    printf("The elements in the 2nd array are:\n");
    for(int i=0;i<n;i++)
        printf("%d ",arr2[i]);
    return 0;
}
