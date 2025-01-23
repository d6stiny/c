#include <stdio.h>

int main() {
    char hidden_char = 'h';
    char guess;

    printf("Guess the hidden character: ");
    scanf(" %c", &guess);

    if (guess == hidden_char) {
        printf("Correct! You guessed the character.\n");
    } else {
        printf("Incorrect. Try again next time.\n");
    }

    return 0;
}