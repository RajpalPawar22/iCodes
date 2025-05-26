#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int original = a, sum = 0, digit;  
    while (a > 0) {
        digit = a % 10; // Get the last digit
        sum += digit * digit * digit; // Add the cube of the digit to sum
        a /= 10; // Remove the last digit
    }


}