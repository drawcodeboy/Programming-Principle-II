// 시험 문제: 다음 중 문자열을 숫자로 바꾸는 함수가 아닌 것은?
// (1) sscanf (2) atoi (3) atof (4) strcpy -> Answer: (4)

#include <stdio.h>

int main(void){
    char instring[] = "file 12";
    char name[10];
    int number;

    sscanf(instring, "%s %d", name, &number);

    printf("name = %s \n", name);
    printf("number = %d \n", number);

    return 0;
}