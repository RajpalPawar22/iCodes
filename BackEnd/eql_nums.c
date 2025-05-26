#include <stdio.h>
#include <math.h>
int main()
{
    double a, b;
     printf("Enter two no.:");
     scanf("%lf %lf", &a, &b);

    if (a>b)
        printf("%2lf is greater than %lf\n", a, b);

    else if (a==b)
        printf("Both are equal\n");     
    
    else 
        printf("%2lf is greater than %f\n", b, a);
    


printf("The difference between both the no. is %lf\n", a-b); 
}  