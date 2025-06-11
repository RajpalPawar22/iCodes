#include<stdio.h>
int main()
{
    // char c, b;
    // printf("Enter char..");
    // scanf("%c", &b);
    // for (c=b; c<='f'; c++){
    //     printf("chal gaya bhai!!!\n");
    // }
    // return 0;

    // int i;
    // for(i=0; i<=10; ++i){
    //     i%2==0 ? printf("%d\n", i): printf("odd\n");
    // }

    // int i=1, n;
    // printf("enter the number for the table:");
    // scanf("%d", &n);
    // for (i; i<=10; i++){
    //     printf("%d * %d=%d\n",n, i, n*i);
    // }

    // factorial of a num
    // int n, i=n, sum=1;
    // printf("eNTER a number:");
    // scanf("%d", &n);
    // for (i=n; i>=1; i--){
    //     sum*=i;
    // }
    // printf("The factorial of the number %d is : %d", n, sum);

    // reverse table 
    // int i=10, n;
    // printf("enter the number for the table:");
    // scanf("%d", &n);
    // for (i; i>=1; i--){
    //     printf("%d * %d=%d\n",n, i, n*i);
    // }

    int n, i=5, sum=1;
    printf("eNTER a number:");
    scanf("%d", &n);
    for (i=5; i<=n; i++){
        sum+=i;
    }
    printf("The sum of the numbers from 5 to %d is : %d", n, sum);
}
//😭😂emojis bhi laga sakta hun, lmfao, table yad karne ki bhi hassle khatam 