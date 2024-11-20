#include <stdio.h>

struct point{
    int x;
    int y;
};

int main(void){
    struct point p = {1, 2}; // (1)
    struct point q = {.y = 2, .x = 1}; // (2) -> 다른 곳에서 안 됨

    struct point r = p; // (3)
    r = (struct point){1, 2}; // (4) -> 다른 곳에서 안 됨

    printf("p=(%d, %d) \n", p.x, p.y);
    printf("q=(%d, %d) \n", q.x, q.y);
    printf("r=(%d, %d) \n", r.x, r.y);
    return 0;
}