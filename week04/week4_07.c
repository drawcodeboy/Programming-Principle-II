#include <stdio.h>

double get_area(double width, double height);

int main(void){
    double width, height;
    printf("Input Width & Height: ");
    scanf("%lf %lf", &width, &height);

    printf("Area: %f", get_area(width, height));
}

double get_area(double width, double height){
    return width*height;
}