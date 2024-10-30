#include <stdio.h>
#include <stdlib.h>

int main(){
    for(int i = 0; i < 6; i++){
        printf("%d ", 1+(rand()%45));
    }
    return 0;
}