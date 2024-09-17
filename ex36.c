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
    int hun,fif,twen,tens,fives,twos,ones;
    printf("enter the amount: ");
    scanf("%d",&amount);
    hun = amount/100;
    fif = (amount - hun*100)/50;
    twen = (amount - (hun*100 + fif*50))/20;
    tens = (amount - (hun*100 + fif*50 + twen*20))/10;
    fives = (amount - (hun*100 + fif*50 + twen*20 + tens*10))/5;
    twos = (amount - (hun*100 + fif*50 + twen*20 + tens*10 + fives*5))/2;
    ones = (amount - (hun*100 + fif*50 + twen*20 + tens*10 + fives*5 + twos*2))/1;
    printf("%d notes of 100\n",amount/100);
    //printf("\n%d notes of 50",(amount - amount * (amount/100)/50));
    printf("%d notes of 50\n",fif);
    printf("%d notes of 20\n",twen);
    printf("%d notes of 10\n",tens);
    printf("%d notes of 5\n",fives);
    printf("%d notes of 2\n",twos);
    printf("%d notes of 1\n",ones);
    return 0;
}