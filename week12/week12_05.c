// 빈칸 문제 나올 수 있음.

#include <stdio.h>
#include <math.h>

struct vector{
    double x;
    double y;
};

struct vector get_vector_sum(struct vector a, struct vector b);
double get_vector_length(struct vector a);
struct vector scan_vector();

int main(void){
    struct vector a, b;
    struct vector sum;

    a = scan_vector();
    b = scan_vector();

    sum = get_vector_sum(a, b);
    printf("vector sum is (%f, %f)\n", sum.x, sum.y);
    printf("vector a length is %f\n", get_vector_length(a));
    printf("vector b length is %f\n", get_vector_length(b));

    printf("vector sum length is %f\n", get_vector_length(sum));

    return 0;
}

struct vector get_vector_sum(struct vector a, struct vector b){
    struct vector result;

    result.x = a.x + b.x;
    result.y = a.y + b.y;

    return result;
}

double get_vector_length(struct vector a){
    double length = sqrt(a.x*a.x+a.y*a.y);

    return length;
}

struct vector scan_vector(){
    printf("Input vector x y: ");
    struct vector v;
    scanf("%lf %lf", &v.x, &v.y);
    return v;
}