#include <stdio.h>
#include <string.h>

int strLen(char src[]);

int main(void){
    char str[30] = "C language is easy";

    printf("[custon func] string (%s) length is %d.\n", str, strLen(str));
    printf("[string.h strlen] string (%s) length is %d.\n\n", str, strlen(str));
    printf("[custon func] string (%s) length is %d.\n", "Python", strLen("Python"));
    printf("[string.h strlen] string (%s) length is %d.\n", "Python", strlen("Python"));
    return 0;
}

int strLen(char src[]){
    int i = 0;

    while(src[i] != 0){
        i++;
    }

    return i;
}