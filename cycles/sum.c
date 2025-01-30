#include <stdio.h>

int main() {
    int n, soma = 0;
    int contador = 1;
    
    printf("Insert a number to see the sum of all numbers from 1 to n: ");
    scanf("%d", &n);
    
    while(contador <= n) {
        soma += contador;
        contador++;
    }
    
    printf("The sum of numbers from 1 to %d is: %d\n", n, soma);
    
    return 0;
}
