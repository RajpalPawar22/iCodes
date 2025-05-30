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

    int i;
    for(i=0; i<=10; ++i){
        i%2==0 ? printf("%d\n", i): printf("odd\n");
    }
}
