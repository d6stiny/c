#include <stdio.h>

int convert(int number) {
    int fahrenheit = 0;
    
    fahrenheit = (number * 9/5) + 32;
    
    return fahrenheit;
}

int main() {
    int number;
    
    printf("Enter a Celsius temperature: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Error: Please enter a positive number.\n");
        return 1;
    }
    
    int result = convert(number);
    printf("%dºC in Fahrenheit is: %dºF\n", number, result);
    
    return 0;
}
