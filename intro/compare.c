#include <stdio.h>

int main() {
    int x = 5, y = 10;

    if (x > y) {
        printf("x is higher than y\n");
    } else if (y > x) {
        printf("y is higher than x\n");
    } else {
        printf("x is equal to y\n");
    }

    return 0;
}