#include <stdio.h>

int main(){
    int x, y;

    printf("input two intergers: ");
    scanf("%d %d", &x, &y);

    printf("%d && %d result: %d\n", x, y, x && y);
    printf("%d || %d result: %d\n", x, y, x || y);
    printf("!%d result: %d\n", x, !x);

    return 0;
}