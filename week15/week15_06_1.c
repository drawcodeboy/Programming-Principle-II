// gcc week15_06_1.c week15_06_2.c

#include <stdio.h>

int all_files;
static int this_file;
extern void sub();

int main(void){
    sub();
    printf("%d\n", all_files);

    return 0;
}