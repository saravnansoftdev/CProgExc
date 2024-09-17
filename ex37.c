/*Write a C program that reads 5 numbers and sums all odd values between them.
Test Data :
Input the first number: 11
Input the second number: 17
Input the third number: 13
Input the fourth number: 12
Input the fifth number: 5
Expected Output:
Sum of all odd values: 46*/
#include<stdio.h>
int main()
{
    int num,n;
    printf("enter the numbers : ");
    scanf("%d",&num);
    int i,sum=0;
    for(i=0; i<num; i++)
    {
        scanf("%d"5,&n);
        if(n%2!=0)
        {
            sum += n;
        }
    }
    printf("Sum : %d",sum);
}