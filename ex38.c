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
    float a,b,c,h;
    printf("enter the datas: ");
    scanf("%f%f%f%f",&a,&b,&c,&h);
    printf("Area of the Tri-Angle: %f",b*h/2);
    return 0;
}