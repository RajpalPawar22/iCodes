#include<stdio.h>
int main(){
    int d;
    printf("Enter the no. of the day of a week (1-7):");
    scanf("%d", &d);
    switch(d){
        case 1:
            printf("The day %d is Sunday\n", d);
            break;
        case 2:
            printf("The day %d is Monday\n", d);
            break;
        case 3: 
            printf("The day %d is Tuesday\n", d);
            break;
        case 4:
            printf("The day %d is Wednesday\n", d);
            break;
        case 5:
            printf("The day %d is Thursday\n", d);
            break;
        case 6:
            printf("The day %d is Friday\n", d);
            break;
        case 7:
            printf("The day %d is Saturday\n", d);
            break;
    }
}