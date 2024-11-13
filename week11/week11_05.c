#include <stdio.h>
#include <string.h>

int main(void){
    char s1[80];
    char s2[80];

    int result;

    printf("input first word: ");
    scanf("%s", s1);
    printf("input second word: ");
    scanf("%s", s2);

    result = strcmp(s1, s2);
    printf("result is %d\n", result);

    if (result < 0){
        printf("%s precedes %s", s1, s2);
    }
    else if (result == 0){
        printf("%s equals %s", s1, s2);
    }
    else{
        printf("%s doesn't precede %s", s1, s2);
    }

    return 0;
}