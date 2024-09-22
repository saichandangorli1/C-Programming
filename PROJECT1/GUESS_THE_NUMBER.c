#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    srand(time(0));

    int randomNumber = (rand() % 100) + 1;
    printf("%d\n", randomNumber);

    int guessNumber, chances = 0;

    // no hint
    // while (randomNumber != guessNumber)
    // {
    //     printf("Guess the number : ");
    //     scanf("%d", &guessNumber);
    //     chances++;
    // }
    // if (guessNumber == randomNumber)
    // {
    //     printf("hurrayayyyy you guessed the number in %d chances", chances);
    // }

    // hint
    // printf("Guess the number between 1 - 100: ");
    // while (randomNumber != guessNumber)
    // {
    //     scanf("%d", &guessNumber);
    //     chances++;
    //     if (guessNumber > randomNumber)
    //     {
    //         printf("Actual Number is smaller than you guess");
    //         printf("\nGuess the number again: ");
    //     }
    //     else if (guessNumber < randomNumber)
    //     {
    //         printf("Actual Number is greaters than you guess");
    //         printf("\nGuess the number again: ");
    //     }
    // }
    // if (guessNumber == randomNumber)
    // {
    //     printf("hurrayayyyy you guessed the number in %d chances", chances);
    // }

    return 0;
}