#include<stdio.h> /*header file hai*/
#include<math.h>
int main(){
    int a, b;
    printf("number dal:\n");
    
    scanf("%d %d", &a, &b);
    int sum = pow(a, b);
    printf("sum is %d", sum);
}