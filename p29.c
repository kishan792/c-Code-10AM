/*
    Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
    Basic Salary <= 10000 : HRA = 20%, DA = 80% deduct pf of 8%
    Basic Salary <= 20000 : HRA = 25%, DA = 90% deduct pf of 10%
    Basic Salary > 20000 : HRA = 30%, DA = 95% deduct pf of 12%

*/
#include<stdio.h>
void main()
{
    int basicSalary;

    printf("Enter the basic salary\n");
    scanf("%d",&basicSalary);
    int grossSalary,HRA,DA,PF;

    if(basicSalary<=10000)
    {
        HRA = 0.20*basicSalary;
        DA = 0.80*basicSalary;
        PF = 0.08*basicSalary;

        grossSalary = (basicSalary + HRA + DA) - PF;

        printf("Gross Salary = %d\n",grossSalary); 
    }
    else if(basicSalary>10000 && basicSalary<=20000)
    {
        HRA = 0.25*basicSalary;
        DA = 0.90*basicSalary;
        PF = 0.10*basicSalary;

        grossSalary = (basicSalary + HRA + DA) - PF;

        printf("Gross Salary = %d\n",grossSalary);
    }
    else
    {
        HRA = 0.30*basicSalary;
        DA = 0.95*basicSalary;
        PF = 0.12*basicSalary;

        grossSalary = (basicSalary + HRA + DA) - PF;

        printf("Gross Salary = %d\n",grossSalary);
    }

}