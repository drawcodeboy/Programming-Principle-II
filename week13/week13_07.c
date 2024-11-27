#include <stdio.h>
#include <string.h>

void sort_strings(char *list[], int size);

int main(int argc, char* argv[]){
    
    sort_strings(argv, argc);

    for (int i = 1; i < argc; i++){
        printf("%s\n", argv[i]);
    }

    return 0;
}

void sort_strings(char *list[], int size){
    for(int i = 1; i < size; i++){
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