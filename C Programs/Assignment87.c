//WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE NFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER THAN 500.(PASSING ARRAY OF STRUCTURE INTO FUNCTION). 

#include<stdio.h>

struct students
{
    int roll_no;
    char name[30];
    char dept_name[10];
    int marks;
}std[10];

void display(struct students std[])
{
    int count=0;
    for(int i=0;i<10;i++)
    {
        if(std[i].marks>500)
        {   printf("%s of %s\n", std[i].name,std[i].dept_name);
            count++;    
        }
    }
    if(count==0)
        printf("\nNO such student exists");
}

int main()
{
    for(int i=0;i<10;i++)
    {
        printf("Enter the RollNo, Name, Dept Name, Marks of student %d: ",i+1);
        scanf("%d %s %s %d", &std[i].roll_no, std[i].name, std[i].dept_name, &std[i].marks);  
    }
    printf("\nStudents whose marks is greater than 500 are:\n");
    display(std);
}