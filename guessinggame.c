#include <stdio.h>
#include <stdlib.h>

int main() {
    int secretNumber = 9, guess;

    while(guess != secretNumber) {
        printf("Enter a numeric guess: \n");
        scanf("%d", &guess);
    }

    printf("Congratulations, you win!\n");

    return 0;
}