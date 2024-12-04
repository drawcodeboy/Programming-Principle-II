#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *list = (int *)calloc(2, sizeof(int)*2);
    int i;
    int *list_new;

    if(list==NULL) return 1;
    // list[0] = 10;
    // list[1] = 20;

    list_new = (int *)realloc(list, sizeof(int)*3);
    if(list_new==NULL) return 1;
    list_new[2] = 30;

    for(int i = 0; i < 3; i++){
        printf("%d ", list_new[i]);
    }
    printf("\n");

    printf("%p %p", &list, &list_new);
    free(list_new);
    return 0;
}