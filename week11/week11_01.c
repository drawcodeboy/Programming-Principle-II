#include <stdio.h>
#define SIZE 10

void sorting(int arr[], int size, int flag);
void swap(int *a, int *b);
void print_array(int arr[], int size);

int main(void){
    int list[SIZE] = {3, 2, 9, 7, 1, 4, 8, 0, 6, 5};

    printf("[Ascending]: ");
    sorting(list, SIZE, 1);
    print_array(list, SIZE);

    printf("\n[Descending]: ");
    sorting(list, SIZE, 0);
    print_array(list, SIZE);
    
    return 0;
}

void sorting(int arr[], int size, int flag){
    /*
    flag = 1 -> ascending
    flag = 0 -> descending
    */

    int least, biggest, temp;

    for(int i = 0; i < size; i++){
        least = i;
        biggest = i;
        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[least]){
                least = j;
            }
            if(arr[j] > arr[biggest]){
                biggest = j;
            }
        }

        if (flag == 1){ // Ascending
            swap(&arr[i], &arr[least]);
        }
        else{ // Descending
            swap(&arr[i], &arr[biggest]);
        }
    }
}

void swap(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(int arr[], int size){
    for (int i = 0; i < SIZE; i++){
        printf("%d ", arr[i]);
    }
}