#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character:");
    scanf("%c", &c);
    if (c>='A'&& c<='Z'){
        printf("Uppercase");
    }
    else if(c>='a'&& c<='z'){
        printf("Lower case");
    }
    else {
        printf("invalid character");
    }
}