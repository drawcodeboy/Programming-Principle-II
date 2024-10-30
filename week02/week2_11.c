#include <stdio.h>

int main(){
    int year, result;

    printf("input year: ");
    scanf("%d", &year);

    result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

    result = year % 4 == 0 && year % 100 != 0 || year % 400 == 0; // 우선순위 연산자에 의해 괄호 없어도 됨
    // 관계 연산자나 논리 연산자는 산술 연산자보다 우선순위가 낮음

    printf("result = %d", result);

    return 0;
}