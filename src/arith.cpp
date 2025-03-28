int my_add(int x, int y) {
    return x + y;
}

int my_sub(int x, int y) {
    return x - y;
}

long my_fact(int x) {
    if (x <= 0)
        return 1;
    if (x < 14) 
        return x * my_fact(x - 1);
    return -1;
}