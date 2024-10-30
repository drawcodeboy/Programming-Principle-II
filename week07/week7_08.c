#include <stdio.h>
#define SIZE 14

double get_mean(int a[], int size);
int get_max(int a[], int size);
int get_min(int a[], int size);

int main(void){
    int list[SIZE];

    // Initialization
    int value = 1;
    for (int i = 0; i < SIZE; i++){
        list[i] = value;
        value += 1;
    }

    printf("Average: %f, Max: %d, Min: %d", get_mean(list, SIZE), get_max(list, SIZE), get_min(list, SIZE));
}

double get_mean(int a[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += a[i];
    }
    return (double)sum / size;
}

int get_max(int a[], int size){
    int ret = a[0];
    for(int i = 1; i < size; i++){
        if (a[i] > ret){
            ret = a[i];
        }
    }
    return ret;
}

int get_min(int a[], int size){
    int ret = a[0];
    for(int i = 1; i < size; i++){
        if (a[i] < ret){
            ret = a[i];
        }
    }
    return ret;
}