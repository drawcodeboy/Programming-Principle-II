// 시험 무조건 나옴
#include <stdio.h>

void swap(int *px, int *py);

int main(void){
    int a = 100, b = 200;
    printf("a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("a = %d, b = %d\n", a, b);
    return 0;
}

void swap(int *px, int *py){
    int temp;

    temp = *px;
    *px = *py;
    *py = temp;
}