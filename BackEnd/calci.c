#include<stdio.h> 
#include<math.h>
int main(){
    int a, b;
    char op;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter operator (+, -, *, /, ^{for power}): ");
    scanf(" %c", &op);
    {
        switch(op){
            case '+':
                printf("The sum of the number %d and %d is: %d", a, b, a+b);
                break;
            case '-':
                printf("The subtraction of %d from %d is: %d", b, a, a-b);
                break;
            case '*':
                printf("The multiplication of both the numbers %d and %d is: %d", a, b, a*b);
                break;
            case '/':
                printf("The division of %d by %d is: %d", a, b, a/b);
                break;
            case '^':
                printf("%d raised to the power of %d is: %lf", a, b, pow(a, b) );
            break;
        }
    }
    
} 