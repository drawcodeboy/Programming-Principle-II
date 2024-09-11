#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    double w, h;

    printf("input width and height: ");
    scanf("%lf %lf", &w, &h);
    
    double area = w*h;
    double perimeter = 2*(w+h);

    printf("area: %f, perimeter: %f", area, perimeter); // 출력할 때는 lf 안 해도 됨.
}