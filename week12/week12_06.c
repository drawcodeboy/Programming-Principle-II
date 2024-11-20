#include <stdio.h>

typedef struct complex{
    double r;
    double i;
} Complex;

Complex cadd(Complex a, Complex b);

int main(void){
    Complex a = {1, 2};
    Complex b = {2, 1};

    Complex result = cadd(a, b);
    printf("result is %f+%fi", result.r, result.i);
}

Complex cadd(Complex a, Complex b){
    Complex result;
    result.r = a.r + b.r;
    result.i = a.i + b.i;
    return result;
}