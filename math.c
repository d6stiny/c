#include <stdio.h>

int main() {
    int num1 = 5, num2 = 7, sum, subtraction, multiplication, division;
    sum = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;
    division = num1 / num2;

    printf("Sum: %d\n", sum);
    printf("Subtraction: %d\n", subtraction);
    printf("Multiplication: %d\n", multiplication);
    if (num2 != 0) {
        printf("Division: %d\n", division);
    } else {
        printf("Division: Undefined (Division by Zero)\n");
    }
}