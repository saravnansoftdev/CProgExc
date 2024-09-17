/*
Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.
Test Data :
Input the Employees ID(Max. 10 chars): 0342
Input the working hrs: 8
Salary amount/hr: 15000
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00
 */

#include<stdio.h>

int main()
{
    char EmpID[10] = "0342";
    int WorkingHrs = 8;
    int SalaryHrs = 15000;
    printf("Emplyee's ID : %s",EmpID);
    printf("\nSalary : U$%d",WorkingHrs * SalaryHrs);
    return 0;
}
