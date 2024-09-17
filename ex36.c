/* Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.
Test Data :
Input the amount: 375
Expected Output:
There are:
3 Note(s) of 100.00
1 Note(s) of 50.00
1 Note(s) of 20.00
0 Note(s) of 10.00
1 Note(s) of 5.00
0 Note(s) of 2.00
0 Note(s) of 1.00*/
#include<stdio.h>
int main()
{
    int amount;
    int hun,fif,twen,tens,twos,ones;
    hun = amount/100;
    fif /= amount - hun*100;
    printf("enter the amount: ");
    scanf("%d",&amount);
    printf("%d notes of 100",amount/100);
    //printf("\n%d notes of 50",(amount - amount * (amount/100)/50));
    printf("%d notes of 50",fif);
    return 0;
}