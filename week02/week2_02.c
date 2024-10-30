#include <stdio.h>

int main(){
    int x = 10;
    int y = 010; // 8진수로는 다른 값
    int z = 0x10; //16진수로 다른 값

    printf("x = %d\n", x);
    printf("y = %o\n", y); // 8진수로 출력 
    printf("z = %x\n", z); // 16진수로 출력

    return 0;
}