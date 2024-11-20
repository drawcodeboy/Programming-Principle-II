#include <stdio.h>

struct point {
    int x;
    int y;
};

struct rect {
    struct point p1;
    struct point p2;
};

int main(void){
    struct rect r;
    int w, h, area, peri;

    printf("Input left upper coordinates: ");
    scanf("%d %d", &r.p1.x, &r.p1.y);

    printf("Input right lower coordinates: ");
    scanf("%d %d", &r.p2.x, &r.p2.y);

    w = r.p2.x - r.p1.x;
    h = r.p2.y - r.p1.y;
    area = w * h;
    peri = 2 * w + 2 * h;
    printf("area = %d, perimeter = %d", area, peri);

    return 0;
}