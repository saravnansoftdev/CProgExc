/*Write a C program that accepts the principle, rate of interest, and time and calculates simple interest.
Test Data:
Input Data: p = 10000, r = 10% , t = 12 year
Expected Output:
Input principle, Rate of interest & time to find simple interest:
Simple interest = 12000*/

#include<stdio.h>
int main()
{
    int Principle,rate,time;
    printf("enter the principle: ");
    scanf("%d",&Principle);
    printf("enter the rate: ");
    scanf("%d",&rate);
    printf("enter the time: ");
    scanf("%d",&time);
    printf("Simple Interest : %d",((Principle/100)*rate)*time);
    return;
}