#include <stdio.h>

// static 타입
// 함수 안에서 선언한 지역 변수인데, 함수가 끝나도 지역 변수 값을 저장하고 있음.

void sub(){
    static int scount = 0;
    auto int acount = 0;
    printf("scount = %d\t", scount);
    printf("acount = %d\n", acount);

    scount++;
    acount++;
}

int main(void){
    sub();
    sub();
    sub();

    return 0;
}