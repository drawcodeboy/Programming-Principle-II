// 안 됨.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strDup(char *s);

int main(void){
    // malloc
    // strlen
    // strcpy
    char input_str[50];

    printf("Input string: ");
    scanf("%s", input_str);

    printf("Output: %s", strDup(input_str));
    return 0;
}

char *strDup(char *s){
    int len = strlen(s);
    char* p = (char *)malloc((len+1)*sizeof(char));
    strcpy(p, s);

    return p;
}