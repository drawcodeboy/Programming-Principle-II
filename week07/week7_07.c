#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

int main(void){
    int i;
    int scores[SIZE];
    int sum = 0;

    srand((unsigned)time(NULL));

    for(int i = 0; i < SIZE; i++){
        scores[i] = rand()%100;
    }

    for(int i = 0; i < SIZE; i++){
        sum += scores[i];
        printf("%d ", scores[i]);
    }
    printf("\n");

    int average = sum / SIZE;

    printf("Average is %d", average);

    return 0;
}