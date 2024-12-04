#include <stdio.h>
#include <stdlib.h>

int main(void){
    int size;
    printf("input size: ");
    scanf("%d", &size);

    int *list = (int *)malloc(size * sizeof(int));

    for(int i = 0; i < size; i++){
        printf("imput number [%d]: ", i);
        scanf("%d", &list[i]);
    }

    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += list[i];
    }
    double mean = (double)sum/size;

    printf("sum = %d, mean = %f\n", sum, mean);

    for(int i = size-1; i >=0; i--){
        printf("%d ", list[i]);
    }
    return 0;
}