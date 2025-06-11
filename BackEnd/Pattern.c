#include<stdio.h>
int main(){
    int i,j, k;
   for (i = 0; i<=5; i++) {
       
        for (j=0; j<=3; j++){
            if((i==0 || i==2)||(i==1 && j!=1&& j!=2)||(i==3 && j%2==0)||(i==4 && j!=1 && j!=2)|| (i==5 && j!=1 && j!=2))
        printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}