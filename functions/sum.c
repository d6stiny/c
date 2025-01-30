#include <stdio.h>

int sum_digits(int number) {
    int sum = 0;
    
    while (number > 0) {
        sum += number % 10; // Add the last digit to sum
        number /= 10; // Remove the last digit
    }
    
    return sum;
}

int main() {
    int number;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Error: Please enter a positive number.\n");
        return 1;
    }
    
    int result = sum_digits(number);
    printf("Sum of digits in %d is: %d\n", number, result);
    
    return 0;
}
