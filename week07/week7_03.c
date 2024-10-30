// Register 변수
// Volatile 변수
#include <stdio.h>

long balance = 0;

void save(int amount){
    // static long balance = 0; // 함수 다음 호출에서 또 실행될 때, 그냥 넘어간다. 이미 저장되어 있어서
    // balance = 0;

    if (amount >= 0){
        printf("%d \t\t", amount);
    }
    else{
        printf("\t %d \t", -amount);
    }

    balance += amount;
    printf("%d \n", balance);
}

int main(void){
    printf("=========================\n");
    printf("income \toutcome\t remain\n");
    printf("=========================\n");

    save(10000);
    save(50000);
    save(-10000);
    save(30000);

    printf("=========================\n");
    
    return 0;
}