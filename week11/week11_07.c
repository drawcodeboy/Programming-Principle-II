#include <stdio.h>
#include <stdlib.h>

int main(void){
    char s1[] = "100";
    char s2[] = "12.93";
    int i;
    double d, result;

    i = atoi(s1);
    d = atof(s2);

    result = i + d;
    printf("reslut is %.2f\n", result);

    return 0;
}