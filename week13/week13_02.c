#include <stdio.h>

void set_pointer(char** q);
int main(void){
    char* p;
    set_pointer(&p);

    printf("Today: %s \n", p);
    return 0;
}

void set_pointer(char** q){
    *q = "All that glisters in not gold.";
}