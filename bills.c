#include <stdio.h>

int main() {
    float income, waterBill, energyBill, phoneBill, totalExpenses, remainingIncome;

    printf("Enter your monthly income: ");
    scanf("%f", &income);
    printf("Enter your monthly water bill: ");
    scanf("%f", &waterBill);
    printf("Enter your monthly energy bill: ");
    scanf("%f", &energyBill);
    printf("Enter your monthly phone bill: ");
    scanf("%f", &phoneBill);

    totalExpenses = waterBill + energyBill + phoneBill;
    remainingIncome = income - totalExpenses;

    printf("You'll pay a total of %.2f€ and will be left with %.2f€", totalExpenses, remainingIncome);
}