#include <stdio.h>
#include <string.h>
#define SIZE 6 // 고정된 상수의 역할

void sort_strings(char *list[], int size);

int main(void){
    char *str[SIZE] = {
        "mycopy",
        "src",
        "dst",
        "apple",
        "bear",
        "zebra"
    };

    sort_strings(str, SIZE);

    for (int i = 0; i < SIZE; i++){
        printf("%s\n", str[i]);
    }

    return 0;
}

void sort_strings(char *list[], int size){
    for(int i = 0; i < size-1; i++){
        int least = i;
        for(int j = i + 1; j < size; j++){
            if (strcmp(list[j], list[least]) < 0){
                least = j;
            }
        }
        char *temp = list[i];
        list[i] = list[least];
        list[least] = temp;
    }
}