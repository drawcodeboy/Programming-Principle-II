#include <stdio.h>

void strCopy(char dst[], char src[]);

int main(void){
    char src[] = "Action speaks louder than words";
    char dst[100];

    strCopy(dst, src);

    for(int i = 0; dst[i] != '\0'; i++){
        printf("%c", dst[i]);
    }
    return 0;
}

void strCopy(char dst[], char src[]){
    for(int i = 0; src[i] != '\0'; i++){
        dst[i] = src[i];
    }
}