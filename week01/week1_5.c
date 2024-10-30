#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    double a, b, c;
    
    printf("input three numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double sum = a + b + c;
    double mean = sum / 3;

    printf("sum: %f\nmean: %f", sum, mean);
}