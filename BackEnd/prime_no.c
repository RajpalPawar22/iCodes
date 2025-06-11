#include<stdio.h>
int main(){
    int i, n, status=1;
    printf("Enter a no. :");
    scanf("%d", &n);

    if (n==0 || n==1){
        printf("Not considered as a prime no.");
        return 0;
    } 

    for(i=2; i<n; i++){
        if (n%i==0){
            status=0;
        }
        
    }

    if (status){
        printf("No. is prime.");
    }
    else {
        printf("The no. %d is not prime.", n);
    }
}