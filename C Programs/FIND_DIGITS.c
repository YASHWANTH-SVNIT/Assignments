#include<stdio.h>

int main()
{
    int T,temp,rem,count;
    label: printf("Enter the number of test cases: ");
    scanf("%d",&T);
    if(T<1||T>15)
    {
        printf("The number of test cases should be >0 & <=15\n");
        goto label;

    }
    int num[T];
    for(int i=1;i<=T;i++)
    {
        count=0;
        input_num: printf("\nTest case %d\n",i);
        printf("Enter the number: ");
        scanf("%d",&num[i]);
        if(num[i]<=0||num[i]>=10000000000)
        {
            printf("The number should >0 & <10^10\n");
            goto input_num;
        }
        temp=num[i];
        while(temp!=0)
        {
            rem=temp%10;
            if(rem==0)        //Skipping dividing by 0
                goto digit;
            if(num[i]%rem==0)
                count++;
            digit: temp/=10;
        }
        printf("%d numbers\n",count);
    }
    return 0;
}









