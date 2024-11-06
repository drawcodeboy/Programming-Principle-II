#include <stdio.h>

int main(void){
    char name[100];
    char address[100];

    printf("Input your name: ");
    //gets_s(name, sizeof(name));
    fgets(name, 100, stdin); // gets의 버퍼 오버로딩 방지

    printf("Input your address: ");
    //gets_s(address, sizeof(address));
    gets(address);

    printf("print %s, %s", name, address);
    return 0;
}