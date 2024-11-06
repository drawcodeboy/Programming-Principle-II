#include <stdio.h>
#include <string.h>

void strCopy(char dst[], char src[]);

int main(void){
    char src[] = "Action speaks louder than words";
    char dst[100], dst2[100];

    strCopy(dst, src);
    strcpy(dst2, src);

    for(int i = 0; dst[i] != '\0'; i++){
        printf("%c", dst[i]);
    }

    printf("\n");

    for(int i = 0; dst2[i] != '\0'; i++){
        printf("%c", dst2[i]);
    }
    return 0;
}

void strCopy(char dst[], char src[]){
    for(int i = 0; src[i] != '\0'; i++){
        dst[i] = src[i];
    }
}