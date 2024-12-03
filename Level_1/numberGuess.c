#include <stdio.h>

int main() {
    int found = 7;
    int guessed = 1;

    while(guessed) {
    int guess;
    printf("Guess a number: ");
    scanf("%d", &guess);
        
    if(guess == found) {
        printf("Congratulations!!!\n");
        guessed = 0;
        return 0;
        }
        printf("Try Again!\n");
    }

    return 0;
}