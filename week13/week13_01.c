#include <stdio.h>

int main(void){
    int i = 100;
    int *p = &i;
    int **q = &p;
    int ***r = &q;

    *p = 200;
    printf("%d %p\n", i, &p);

    **q = 300;
    printf("%d %p\n", i, &q);

    ***r = 400;
    printf("%d %p\n", i, &r);
    return 0;
}