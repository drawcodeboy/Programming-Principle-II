#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *list, numStudents;
    int sum = 0;

    printf("Number of students: ");
    scanf("%d", &numStudents);

    list = (int *)malloc(numStudents * sizeof(int));
    if (list == NULL){
        printf("Memory Allocation Error");
        exit(1);
    }

    for(int i = 0; i < numStudents; i++){
        printf("Student %d score: ", i + 1);
        scanf("%d", &list[i]);
    }

    for(int i = 0; i < numStudents; i++){
        sum += list[i];
    }
    printf("Mean of scores=%.2f\n", (double)sum/numStudents);
    free(list);

    return 0;
}