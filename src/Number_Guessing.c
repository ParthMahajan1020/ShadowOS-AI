#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void runNumberGuessingGame()
{
    // Seed the random number generator with current time
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

    // printf("Random number between 1 and 100: %d\n", randomNumber);

    int no_of_guessed = 0;
    int guessed;

    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed);

        if (guessed > randomNumber)
        {
            printf("Lower number please!\n");
        }
        else if (guessed == randomNumber)
        {
            printf("Congrats!\n");
        }

        else
        {
            printf("Higher number please!\n");
        }
        no_of_guessed++;
    } while (guessed != randomNumber);

    printf("You guessed the number in %d guesses.", no_of_guessed);
return;
}