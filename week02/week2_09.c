#include <stdio.h>
#include <math.h>

int main(){
    double a, b;
    a = (0.3 * 3) + 0.1;
    b = 1;
    printf("a==b result: %d\n", a==b);

    printf("fabs(a-b)<0.00001 result: %d\n", fabs(a-b)<0.00001);

    return 0;
}