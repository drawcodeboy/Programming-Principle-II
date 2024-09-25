#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    printf("Input Coefficients a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    // 근의 공식
    int result1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    int result2 = (-b-sqrt(b*b-4*a*c))/(2*a);

    printf("Result = {%d, %d}", result1, result2);

    return 0;
}