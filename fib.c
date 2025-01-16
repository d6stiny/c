#include <stdio.h>

unsigned int fib(unsigned int n) {
if (n < 2)
    return n;
else
    return fib(n - 1) + fib(n - 2);
}

int main() {
    for(unsigned int i = 0; i < 10; i++) {
        printf("%d ", fib(i));
    }
    
    return 0;
}
