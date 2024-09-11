#include <stdio.h>

int main(){
    float x = 1e39;
    printf("x = %o\n", x);

    double y;
    y = (1.0e20 + 5.0) - 1.0e20; // 연산 과정에서 오버플로우가 나버림
    printf("y = %f\n", y); // 5를 예상했으나 0이 나옴.

    return 0;
}