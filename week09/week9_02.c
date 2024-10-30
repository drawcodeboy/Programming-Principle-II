#include <stdio.h>

int main(void){
    int n;
    printf("input integer: ");
    scanf("%d", &n);

    do{
        printf("%d", n % 10);
        n = n / 10;
    } while(n > 0);

    return 0;
}