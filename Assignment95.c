/*WRITE A  C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER ARRAY EMPLOY WITH 50 ELEMENTS .THE PROGRAM SHOULD READ ‘N’
EMPLOYEE DETAILS AND PRINT THE LIST OF ALL EMPLOYEE ALONG WITH THE BASIC A PAY*/

#include<stdio.h>

struct Employee 
{
    int E_id;
    char E_name[25];
    char E_dept[10];
    int BS;
};

int main()
{
    struct Employee E[50];
    
    for(int i=0;i<50;i++)                //Input
    {
        printf("\nEnter the details of the employee %d",i+1);
        printf("\nEmployee id: ");
        scanf("%d",&E[i].E_id);
        printf("Employee name: ");
        scanf(" %[^\n]",&E[i].E_name);
        printf("Employee Dept: ");
        scanf(" %[^\n]",&E[i].E_dept);
        printf("Employee Basic Salary: ");
        scanf("%d",&E[i].BS);
    }

    printf("\nList of all employees:\n" );   //Output
    for(int i=0;i<50;i++)               
    {
        printf("\n\nDetails of Employee %d",i+1);
        printf("\nEmployee id: %d",E[i].E_id);
        printf("\nEmployee name: %s",E[i].E_name);
        printf("\nEmployee Dept: %s",E[i].E_dept);
        printf("\nEmployee Basic Salary: %d",E[i].BS);
    }
    
    return 0;
}
