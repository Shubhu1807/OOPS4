#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX 5

struct employee
{
    int emp_id;
    char emp_name;
    char emp_desg;
    float salary;
};

void input(struct employee Arr[MAX])
{
    printf("Enter the information of employees: \n");

    for(int i=0;i<MAX;i++)
    {
        printf("Enter the data for employee %d:\n",i+1);
        printf("Enter name: ");
        scanf("%s",&Arr[i].emp_name);
        printf("Enter id: ");
        scanf("%s",&Arr[i].emp_id);
        printf("Enter Designation: ");
        scanf("%s",&Arr[i].emp_desg);
        printf("Enter Salary: ");
        scanf("%s",&Arr[i].salary);
    }
}
void display(struct employee Arr[MAX])
{
    printf("All Employee detail:\n");
    printf("---------------------------------\n");
    printf("NAME: \t Id: \t Designation: \t Salary:");
    for(int i=0;i<MAX;i++)
    {
        printf("%s \t %d \t %s \t %f",Arr[i].emp_name,Arr[i].emp_id,Arr[i].emp_desg,Arr[i].salary);
    }
    printf("---------------------------------\n");

}

void highest_salary(struct employee Arr[MAX])
{
    int maxi=Arr[0].salary;
    for(int i=0;i<MAX;i++)
    {
        if(Arr[i].salary>=maxi)
        {
            maxi=Arr[i].salary;
        }
    }
    for(int i=0;i<MAX;i++)
    {
        if(Arr[i].salary==maxi)
        {
            printf("Detail of employee with highest salary:\n");
            printf("---------------------------------\n");
            printf("NAME: \t Id: \t Designation: \t Salary:");
            printf("%s \t %d \t %s \t %f",Arr[i].emp_name,Arr[i].emp_id,Arr[i].emp_desg,Arr[i].salary);

            printf("---------------------------------\n");
        }
    }
}

int main()
{
    struct employee Arr[MAX];
    input(Arr);
    display(Arr);
    highest_salary(Arr);
}