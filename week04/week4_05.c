#include <stdio.h>

int main(void){
    int number, sum = 0;

    do{
        printf("input number: ");
        scanf("%d", &number);
        sum += number;
    } while(number != 0);

    printf("Summation = %d\n", sum);
    return 0;
}