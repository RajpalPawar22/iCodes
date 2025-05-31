#include<stdio.h>
int main()
{   int n, i=0, sum=0;
    printf("num please *rudely* :");
    scanf("%d", &n);
    do{
        sum+=i;
        i++;
    } while (i<=n);
    printf("%d\n", sum);
    i=n;
    do{
         printf("%d ", i);
        --i;
    }while(i>=1);
    
}