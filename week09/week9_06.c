#include <stdio.h>

int main(void){
    int i = 10;
    int *pi = &i;

    printf("i = %d, pi = %p\n", i, pi);

    (*pi)++;
    printf("i = %d, pi = %p\n", i, pi);

    *pi++;
    printf("i = %d, pi = %p, *pi = %p\n", i, pi, *pi);

    return 0;
}