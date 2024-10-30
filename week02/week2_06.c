#include <stdio.h>

int main(){
    float x = 1.2345678901234567890;
    double y = 1.2345678901234567890;

    printf("float size: %d\n", sizeof(float));
    printf("double size: %d\n", sizeof(double));

    printf("x = %30.25f\n", x);
    printf("y = %30.25f\n", y); // double의 정밀도가 더 높은 것을 볼 수 있음.

    return 0;
}