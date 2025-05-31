//profram to check if a given number is natural or not
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a no. :");
    scanf("%d", &n);

    if (n>=1){
        printf("THE number %d is a natural number.", n);
    }
    else {
        printf("not a whole number.");
    }
}