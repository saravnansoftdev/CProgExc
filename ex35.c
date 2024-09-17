/*Write a C program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points).
Test Data :
Input total distance in km: 350
Input total fuel spent in liters: 5
Expected Output:
Average consumption (km/lt) 70.000*/

#include<stdio.h>
int main()
{
    int Bike_avg_consumption;
    int TotalDistance = 350;
    int Fuel_in_ltr = 5;
    printf("The Avg Consumption : %d",TotalDistance/Fuel_in_ltr);`
    return 0;
}