#include <stdio.h>
#include <stdlib.h>

int **imat(int m, int n);
int **add_mat(int **a, int **b, int m, int n);

int main(void){
    int row, col;
    printf("Define Matrix size: ");
    scanf("%d %d", &row, &col);
    int **a = imat(row, col);
    int **b = imat(row, col);
    
    printf("Input matrix A\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Input matrix B\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &b[i][j]);
        }
    }

    int **mat = add_mat(a, b, row, col);

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int **imat(int m, int n){
    int **a, i;
    a = (int **)malloc(m * sizeof(int *));
    if(a==NULL){
        printf("OOM\n");
        exit(1);
    }
    for(int i = 0; i < m; i++){
        a[i] = (int *)malloc(n * sizeof(int));
        if(a[i] == NULL){
            printf("OOM\n");
            exit(1);
        }
    }
    return a;
}

int **add_mat(int **a, int **b, int m, int n){
    int **ret = imat(m, n);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            ret[i][j] = a[i][j] + b[i][j];
        }
    }
    return ret;
}

// 연결리스트는 생략