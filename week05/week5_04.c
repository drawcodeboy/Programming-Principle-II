#include <math.h>
#include <stdio.h>

int main(void){
    double pi = 3.14145926535;
    double x, y;

    x = pi / 2;
    
    y = sin(x); // radian 값이 input으로 들어가는 듯 함.
    printf("sin(%f) = %f\n", x, y);

    y = cos(x);
    printf("cos(%f) = %f\n", x, y);

    return 0;
}