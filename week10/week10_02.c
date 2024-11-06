/*
배열 매개변수는 포인터로 생각할 수 있다.

*/
#include <stdio.h>

void convert(int *score, double *gpa, int size);

int main(void){
    int scores[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    double gpa[10];

    convert(scores, gpa, 10);

    for(int i = 0; i < 10; i++){
        printf("%03d --> %.2f\n", scores[i], gpa[i]);
    }

    return 0;
}

void convert(int *scores, double *gpa, int size){
    for(int i = 0; i < size; i++){
        gpa[i] = (double)scores[i]/100.*4.5;
    }

    // return gpa;
}