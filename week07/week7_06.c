#include <stdio.h>
#include <math.h>

double sin_degree(double degree){
    return M_PI * degree / 180.0;
}

int main(void){
    for (double i = 0; i <= 180; i+= 10){
        printf("sin(%f) value is %f\n", i, sin_degree(i));
    }
    return 0;
}