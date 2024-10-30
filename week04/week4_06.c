#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand((unsigned)time(NULL));
    int answer = rand()%50 + 1;
    int guess;
    int tries;

    do {
        printf("Guess the answer: ");
        scanf("%d", &guess);
        tries++;
        if (guess > answer) printf("High \n");
        else if (guess < answer) printf("Low \n");
        else printf("answer = %d", answer);
    } while (guess != answer);

    printf("Congratulation! tries=%d\n", tries);
    return 0;
}