/*Write a C program to calculate the sum of all numbers not divisible by 17 between two given integer numbers.
Test Data :
Input the first integer: 50 Input the second integer: 99
Expected Output:
Sum: 3521*/
#include<stdio.h>
int main()
{
    int sum = 0,i;
    for(i = 50; i<100; i++)
    {
        if(i%17!=0)
        {
            sum +=i;
        }
    }
    printf("sum = %d",sum);
    return;
}