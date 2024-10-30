#define _CRT_SECURE_NO_WARNINGS // scanf 보안 권한 허용
#include <stdio.h>

int main(void){
    char c;
    int i;
    float f;
    double d;
    char s[10];

    // printf("Enter interger, float, double, string, character\n");
    // scanf("%d %f %lf %s %c", &i, &f, &d, s, &c);
    // printf("%d %f %lf %s %c\n", i, f, d, s, c);

    // 타입 별 Byte
    printf("short: %d, int: %d, long long: %d\n", sizeof(short), sizeof(int), sizeof(long long));
    printf("float: %d, double: %d, long double: %d\n", sizeof(float), sizeof(double), sizeof(long double));
    printf("char: %d\n", sizeof(char));

    return 0;
}