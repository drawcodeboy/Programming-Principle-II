#include <stdio.h>

int isPrime(int number);

int main(void){
    int n1, n2;
    printf("Input your number range: ");
    scanf("%d %d", &n1, &n2);

    int result = 0;

    for(int i = n1; i <= n2; i++){
        if (isPrime(i) == 1){
            printf("%d ", i);
            result += 1;
        }
    }

    printf("\nResult is %d", result);

    return 0;
}

int isPrime(int number){
    if (number == 1){
        return 0;
    }
    
    int divisor = 0;
    for(int i = 2; i < number; i++){
        if (number % i == 0){
            divisor++;
        }
    }

    if (divisor >= 1){
        return 0;
    }
    else{
        return 1;
    }
}