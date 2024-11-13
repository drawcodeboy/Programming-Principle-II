#include <stdio.h>

int main(void){
    char *menu[5] = {
        "init",
        "open",
        "close",
        "read",
        "write"
    };

    /*
    // equal
    char *menu[5] = {
        "init",
        "open",
        "close",
        "read",
        "write"
    };
    */

    for(int i = 0; i < 5; i++){
        printf("order(%d) menu: %s\n", i+1, menu[i]);
    }

    return 0;
}