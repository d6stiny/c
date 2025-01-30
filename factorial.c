#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;
    int counter = 1;
    
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Error: The number must be non-negative!\n");
        return 1;
    }
    
    while(counter <= n) {
        factorial *= counter;
        counter++;
    }
    
    printf("The factorial of %d is: %lld\n", n, factorial);
    
    return 0;
}
