// pp. 386 가변매개변수

#include <stdio.h>
#include <stdarg.h>

int sum(int, ...);
int main(void){
    int answer = sum(4, 4, 3, 2, 1);
    printf("sum is %d", answer);

    return 0;
}

int sum(int num, ...){
    int answer = 0;
    va_list argptr;

    va_start(argptr, num);
    for(; num > 0; num--){
        answer += va_arg(argptr, int);
    }

    va_end(argptr);
    return answer;
}