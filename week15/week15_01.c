#include <stdio.h>

int main(void){
    FILE *fp = NULL;
    fp = fopen("sample.txt", "w");

    if(fp == NULL){
        printf("Failed to open file\n");
    }
    else{
        printf("Success to open file\n");
    }

    fputc('a', fp);
    fputc('b', fp);
    fputc('c', fp);
    fputc('\n', fp);
    fclose(fp);
    return 0;
}