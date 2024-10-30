#include <stdio.h>
#include <math.h>

int main(void){
    double distance, height, degree, radian;
    printf("input distance: ");
    scanf("%lf", &distance);

    printf("input height: ");
    scanf("%lf", &height);

    printf("input degree: ");
    scanf("%lf", &degree);

    radian = degree * (M_PI / 180.0);

    double tree_height = tan(radian) * distance + height;
    printf("Tree Height is %lfm", tree_height);

    return 0;
}