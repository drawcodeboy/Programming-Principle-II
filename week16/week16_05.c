#include <stdio.h>
#include "power.h"

int main(void){
    int x, y;

    printf("Input x: ");
    scanf("%d", &x);
    printf("Input y: ");
    scanf("%d", &y);
    printf("%d's %d power value is %f", x, y, power(x, y));

    return 0;
}