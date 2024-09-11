#include <stdio.h>

int main(){
    int x, y;

    printf("two integers: ");
    scanf("%d %d", &x, &y);

    printf("Bigger number: %d\n", (x>y)?x:y);
    printf("Smaller number: %d\n", (x<y)?x:y);
}