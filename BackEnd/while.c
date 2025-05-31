#include<stdio.h>
int main()
{
    // int i=0, n;
    // printf("ENTER a no. :");
    // scanf("%d", &n);
    // while (i<=n){
    //     printf(" %d", i);
    //     i++;
    // }

    // int i=1, n, sum=0;
    // printf("Enter a no. :");
    // scanf("%d", &n);
    // while (i<=n){
    //     sum+=i;
    //     i++;
    // }
    // printf("The sum of first %d numbers is: %d", n, sum);

    long long i, num, reversed=0, digit;
    printf("Enter a no.:");
    scanf("%lld", &num);
    long long org_num=num;
    while(num>0){
        digit=num%10;
        reversed=reversed*10 +digit;
        num=num/10;
    
    }
    printf("%lld", reversed);
 }//mera dimag kharab ho jaegaaa!!