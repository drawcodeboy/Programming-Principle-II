#include <stdio.h>
#define PRINT(exp) printf(#exp"=%d\n", exp); // #exp = 문자열 변환 연산자

int main(void){
    int x = 5, y = 10;
    PRINT(x);
    PRINT(y);

    return 0;
}