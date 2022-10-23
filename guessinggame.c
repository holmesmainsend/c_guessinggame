#include <stdio.h>
#include <stdlib.h>

int main() {
    int secretNumber = 9;
    int guess;
    int guessCounter = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    while(guess != secretNumber && outOfGuesses != 1) {
        if (guessCounter < guessLimit) {
            printf("Enter a numeric guess: \n");
            scanf("%d", &guess);
            guessCounter++;
        } else
            outOfGuesses = 1;
    }

    if (outOfGuesses == 1)
        printf("Out of guesses\n");
    else
        printf("You won in %d guess(es)!\n", guessCounter);

    return 0;
}