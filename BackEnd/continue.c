//print every num from 1 to 89 except 5, 10, 15
#include<stdio.h>
int main(){
    // int i=1;
    // for (i; i<=89; i++){
    //     if(i==5 || i==10 || i==15){
    //         continue;
    //                                 //continue only skip one iteration or the iteration mentioned
    //     }
    //     printf("%d ", i);
    // }

    int i=5;
    for (i; i<=51; i++){
        if(i%2==0){
            continue;
                                    //continue only skip one iteration or the iteration mentioned
        }
        printf("%d ", i);
    }
}