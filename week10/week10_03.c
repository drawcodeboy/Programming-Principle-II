/*
문자열

*/
#include <stdio.h>

int main(void){
    int t;
    char str[6];
    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
    str[3] = 'd';

    int i = 0;

    while(str[i] != 0){ // 0은 '\0'과 같다.
        printf("%c", str[i]);
        i++;
    }

    return 0;
}