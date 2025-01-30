#include <stdio.h>

int main() {
    int numero;
    
    printf("Insert a number to see its multiplication table: ");
    scanf("%d", &numero);
    
    printf("\nMultiplication table of %d:\n", numero);
    
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    
    return 0;
}
