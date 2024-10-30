// Pointer
// 메모리는 바이트 단위로 액세스 된다.
// 변수의 주소를 계산하는 연산자: &
// 변수 i의 주소: &i

#include <stdio.h>

int main(void){
    int i = 10;
    char c = 69;
    float f = 12.3;

    // 형식 지정자 %p: 주소를 출력
    // 둘 다 16진수로 변환하지만, %p는 0x 접두사가 있다.
    printf("i's address: %p\n", &i);
    printf("c's address: %p\n", &c);
    printf("f's address: %p\n", &f);
    return 0;
}