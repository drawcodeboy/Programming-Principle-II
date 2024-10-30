// 포인터 변수 선언 (int *p)
#include <stdio.h>

int main(void){
    // int* p, int * p도 가능하긴 한데, int *p로 적는 게 보기 좋다(?)
    // 여러 개를 한 번에 선언할 때는 int *p1, *p2, *p3로 하나하나 *를 할당해줘야 한다.
    int i = 10;
    double f = 12.3;
    int *pi = NULL; // 포인터의 쓰레기값은 위험하기 때문에, NULL로 초기화를 해주어야 한다.
    double *pf = NULL;

    pi = &i;
    pf = &f;

    // *pi는 10이 나온다.
    // * = 간접 참조 연산자
    printf("%p %p %d\n", pi, &i, *pi);
    printf("%p %p %f\n", pf, &f, *pf);
    return 0;    
}