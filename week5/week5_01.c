// 원뿔의 반지름, 높이(int) -> 부피 계산
#include <stdio.h>
#include <math.h>

double getVolume(int radius, int height);

int main(void){
    int radius, height;
    printf("Input radius & height: ");
    scanf("%d %d", &radius, &height);

    printf("Volume is %lf", getVolume(radius, height));

    return 0;
}

double getVolume(int radius, int height){
    // (1/3)*pi&r^2*h
    double volume = M_PI * (double)(radius * radius * height) / 3.0;

    return volume;
}