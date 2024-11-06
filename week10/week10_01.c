// Page 476, PDF 478
/*
a가 배열이라면
*a = a[0], *(a+1)=a[1]과 같다.

반대로 포인터를 배열의 이름처럼 사용할 수도 있다. Page 478, PDF 480

p는 p++ 연산 가능
a는 a++ 연산 불가능
*/
#include <stdio.h>

int main(void){
    int a[] = {10, 20, 30, 40, 50};
    int *p;

    p = a;
    printf("a[0]=%d a[1]=%d a[2]=%d \n", a[0], a[1], a[2]);
    printf("*a=%d *(a+1)=%d *(a+2)=%d \n", *a, *(a+1), *(a+2));
    printf("p[0]=%d p[1]=%d p[2]=%d \n", p[0], p[1], p[2]);
    printf("*p=%d *(p+1)=%d *(p+2)=%d \n\n", *p, *(p+1), *(p+2));

    a[0] = 60;
    a[1] = 70;
    a[2] = 80;

    printf("a[0]=%d a[1]=%d a[2]=%d \n", a[0], a[1], a[2]);
    printf("p[0]=%d p[1]=%d p[2]=%d \n", p[0], p[1], p[2]);

    // a++; // 불가능
    p++;

    return 0;
}