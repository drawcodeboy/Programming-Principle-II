#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fp;
    char fname[100];
    int number, count = 0;
    char name[20];
    float score, total = 0.0;

    printf("input score file name: ");
    scanf("%s", fname);

    if((fp=fopen(fname, "w")) == NULL){
        fprintf(stderr, "cannot open score file %s\n", fname);
        exit(1);
    }

    while(1){
        printf("input number, name, score (if negative, exit) ");
        scanf("%d", &number);
        if(number < 0) break;
        scanf("%s %f", name, &score);
        fprintf(fp, " %d %s %f", number, name, score);
    }
    fclose(fp);

    if((fp = fopen(fname, "r")) == NULL){
        fprintf(stderr, "cannot open score file %s\n", fname);
        exit(1);
    }

    while(!feof(fp)){
        fscanf(fp, "%d %s %f", &number, name, &score);
        total += score;
        count++;
    }

    printf("average = %.2f\n", total/count);
    fclose(fp);

    return 0;
}