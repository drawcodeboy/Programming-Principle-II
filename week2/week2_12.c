#include <stdio.h>

int main(){
    double f;

    printf("input F Temperature: ");
    scanf("%lf", &f);

    double c = ((double)5/9)*(f-32);
    printf("Result is %f", c);

    return 0;
}