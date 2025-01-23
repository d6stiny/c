#include <stdio.h>

int main() {
    int numero;
    printf("Enter a number: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("is even.\n");
    } else {
        printf("is odd.\n");
    }

    return 0;
}