/*keep taking nums as input until user enters an odd number*/
#include<stdio.h>
int main(){
    // int n, i=0;
    // for (i; ; i++){
    //     printf("Enter a no.:");
    //     scanf("%d", &n);
    //     if(n%2!=0){
    //         printf("loop break!");
    //         break;
    //     }
    // }

    int n, i=0;
    for (i; ; i++){
        printf("Enter a no.:");
        scanf("%d", &n);
        if(n%7==0){  
            printf("loop break!");
            break; /*BREAK WOULD SKIP EVERY LOOP, LIKE IF YOU USED IN A NESTED LOOP, IT WILL BREAK EVERY LOOP  WHICH FORMS THAT NESTED LOOP*/
        }
    }
}