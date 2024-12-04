#include <stdio.h>

int main(void){
    int i = 10;
    int *pi = &i;

    printf("i = %d, pi = %p\n", i, pi);

    (*pi)++;
    printf("i = %d, pi = %p\n", i, pi);

    *pi++;
    printf("i = %d, pi = %p, &i = %p, *pi = %d\n", i, pi, &i, *pi);

    printf("i = %d", i);
    return 0;
}