//WAP to find if a year is a leap year or not using the ternary operator.

#include<stdio.h>
int main (){
    int year;
    printf("Enter the year:");
    scanf("%d", &year);

    (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) ?
printf("The year %d is a leap year.", year) :
printf("The year %d is not a leap year.");

}

