#include <stdio.h>
#include <math.h>

struct point{
    int x;
    int y;
};

int main(void){
    struct point p1, p2;
    int xdiff, ydiff;
    double dist;

    printf("input your point1(x, y): ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("input your point2(x, y): ");
    scanf("%d %d", &p2.x, &p2.y);

    xdiff = p1.x - p2.x;
    ydiff = p1.y - p2.y;
    
    dist = sqrt(xdiff*xdiff + ydiff*ydiff);

    printf("distance: %f", dist);
    return 0;
}