#include <stdio.h>

int main() {
    float nota;

    printf("Enter the grade: ");
    scanf("%f", &nota);

    if (nota >= 9) {
        printf("Approved with honors\n");
    } else if (nota >= 7) {
        printf("Approved\n");
    } else if (nota >= 5) {
        printf("In recovery\n");
    } else {
        printf("Failed\n");
    }

    return 0;
}