#include<stdio.h>
#include<math.h>
int main()
{
    int a, digit=0, sum=0;
    printf("Enter a number: ");
    scanf("%d", &a);
    int org=a, num_of_dig=floor(log10(a))+1;
    while (a>0)
    {
        digit=a%10;
        sum+=pow(digit, num_of_dig);
        a/=10;
    }
    if(sum==org)
    {
        printf("The no. %d is an armstrong number.\n", org);
    }
    else
    {
        printf("The no. %d is not an armstrong number.\n", org);
    }
    return 0;

}
// yayyy bana diya!
// sync check 3


