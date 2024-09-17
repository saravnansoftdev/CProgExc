/*Write a C program that reads three floating-point values and checks if it is possible to make a triangle with them. Determine the perimeter of the triangle if the given values are valid.
Test Data :
Input the first number: 25
Input the second number: 15
Input the third number: 35
Expected Output:
Perimeter = 75.0*/

#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the a,b and c values: ");
    scanf("%f%f%f",&a,&b,&b);
    if(a < (b+c) && b < (a+c) && c < (a+b))
    {
        printf("Perimeter triangle : %f",a+b+c);
    }
    else
    {
        printf("Not possible to make perimeter triangle");
    }
    return 0;
}