#include <stdio.h>

void main(){
    int a;

    printf("Input Number: ");
    scanf("%d", &a);

    if (a > 0){
        printf("positive");
    }
    else if (a < 0){
        printf("negative");
    }
    else{
        printf("zero");
    }
}