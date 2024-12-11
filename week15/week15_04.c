// 소수를 구하여 파일에 작성하고, 이에 대한 합을 화면에 출력하라.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void get_prime(int *list, int size){
    for(int i = 2; i <= size; i++){
        if (list[i] == 0){
            for(int j = i + i; j <= size; j += i){
                list[j] = 1;
            }
        }
    }
}

int main(void){
    FILE *fp;
    char fname[100];
    int *list, max_num;
    
    printf("Input file name: ");
    scanf("%s", fname);

    printf("Input max number: ");
    scanf("%d", &max_num);
    list = (int *)malloc((max_num+1) * sizeof(int));
    // 초기화
    for(int i = 0; i <= max_num; i++){
        list[i] = 0;
    }

    get_prime(list, max_num);

    if((fp = fopen(fname, "w")) == NULL){
        fprintf(stderr, "cannot openf file %s.\n", fname);
        exit(1);
    }

    int count = 0;
    int prime_sum = 0;
    for(int i = 2; i <= max_num; i++){
        if(list[i] == 0){
            fprintf(fp, "%d ", i);
            count += 1;
            prime_sum += i;
            if(count % 5 == 0){
                fprintf(fp, "\n");
            }
        }
    }

    fprintf(stdout, "Sum: %d", prime_sum);

    fclose(fp);
}