/*
condition should be integer type.
logic이 난잡하네

switch(condition){
    case c1:
        statement;
        break;
    ...
    default:
        statement;
        break;
}
*/
#include <stdio.h>

int main(){
    int number;
    scanf("%d", &number);

    switch(number){
        case 0:
            printf("None\n");
            break;
        case 1:
            printf("one or two\n");
            break;
        case 2:
            printf("one or two\n");
            break;
        case 3:
            printf("three\n");
            break;
        default:
            printf("over\n");
            break;
    }

    return 0;
}