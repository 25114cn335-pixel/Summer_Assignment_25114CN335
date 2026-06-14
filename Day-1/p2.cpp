#include <stdio.h>

// printTable() prints table of number and takes
// 1 required value that is number of whose table
// to be printed and an optional input i whose default value is 1
void printTable(int n, int i) {
    if (i == 11)
        return;
    printf("%d * %d = %d\n", n, i, n * i);
    i++;
    printTable(n, i);
}

int main() {
    int n = 5;
    printTable(n, 1);
    return 0;
}