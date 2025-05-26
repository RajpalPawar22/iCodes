/* WAP to check if a student is passed or failed; marks>30--> PASS, marks<=30--> FAIL. 
and give the grades also*/

#include<stdio.h>
int main (){
    int marks;
    printf("Enter your marks:");
    scanf("%d", &marks);

    // if (marks > 30){
    //     printf("Nailed it!");
    // }

    // else {
    //     printf("Loser.");
    // }
    
   
   
    marks >30? printf("PASSED\n") : printf("FAIL\n");
    if (0<marks && marks>=30 && marks<70){
        printf("lol, B grade");
    }
    else if (marks>=0 && marks<30){
        printf("Utter Failure!");
    }
    else if (marks>=70 && marks<90){
        printf("Not Bad!");
    }
    else if (marks>=90 && marks<=100){
        printf("Beat it!");
    }
    else {
        printf("Enter Valid marks, you moron.");
    }


}