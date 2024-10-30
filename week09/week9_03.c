#include <stdio.h>

int facto(int n);
int facto2(int n);

int main(void){
    int n;

    printf("Input number: ");
    scanf("%d", &n);

    printf("facto result: %d\n", facto(n));
    printf("facto2 result: %d\n", facto2(n));
}

int facto(int n){
    int f;

    f = 1;

    while(n > 1){
        f = f * n;
        n--;
    }

    return f;
}

int facto2(int n){
    if(n == 1 | n == 0){
        return 1;
    }
    else{
        return n * facto2(n-1);
    }
}