double power(int x, int y){
    double value = 1;
    for(int i = 0; i < y; i++){
        value *= x;
    }
    return value;
}