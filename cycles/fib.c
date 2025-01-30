#include <stdio.h>

unsigned int fib(unsigned int n) {
    if (n < 2)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}

int main() {
    unsigned int limit;
    printf("Enter the limit for Fibonacci sequence: ");
    scanf("%u", &limit);
    
    unsigned int i = 0;
    while (fib(i) <= limit) {
        printf("%u ", fib(i));
        i++;
    }
    printf("\n");
    
    return 0;
}
