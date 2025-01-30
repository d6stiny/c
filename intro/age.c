#include <stdio.h>

int main() {
    int year;
    printf("Enter your birth year: ");
    if (scanf("%d", &year) != 1 || year < 1900 || year > 2025) {
        printf("Invalid year.\n");
        return 1;
    }
    printf("You are %d years old.\n", 2025 - year);
    return 0;
}