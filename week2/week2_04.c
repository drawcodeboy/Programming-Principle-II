#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    unsigned char c = 128; // Character type도 integer처럼 사용가능하다.
    // unsigned char Type이 존재함.

    printf("%d\n", c);
    printf("%d\n", sizeof(c));
    return 0;
}