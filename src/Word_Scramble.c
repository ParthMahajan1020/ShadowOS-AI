#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "utils.h"

void shuffleWord(char *input, char *shuffled)
{
    int len = strlen(input);
    strcpy(shuffled, input); // Copy the original word

    for (int i = 0; i < len; i++)
    {
        int j = rand() % len;

        // Swap shuffled[i] and shuffled[j]
        char temp = shuffled[i];
        shuffled[i] = shuffled[j];
        shuffled[j] = temp;
    }
}

void printInColor(char str[], int colorCode)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, colorCode);
    printf("%s", str);
    SetConsoleTextAttribute(h, 7); // Reset to default (white)
}

void runWordScrambleGame()
{
    srand(time(NULL)); // Seed random number generator

    char playAgain;

    
    char name[50];
    printf("Enter your name: ");
    scanf("%s", &name);
    
    printf("\n\n");
    printf("----------------------------------------\n");
    
    char message[100];
    sprintf(message, "Welcome %s in a WORD SCRAMBLE GAME!", name);
    typeEffect(message);
    do
    {
    printInColor("\n Easy Mode: Words have 4-5 letters.\n", 3); // Cyan
        printInColor(" Medium Mode: Words have 8-9 letters.\n", 6); // Yellow
        printInColor(" Hard Mode: Words have 13-14 letters.\n", 4); // Red

        int mode;
        printf("\n\n Choose which mode you want from the following:-\n");
        printf("1. Easy\n2. Medium\n3. Hard\n");
        printf("Enter your choice: ");
        scanf("%d", &mode);

        // Word Bank
        char *easyWords[] = {"hello", "peak", "table", "pink", "bike", "blue", "ring", "gold", "frog", "leaf"};
        char *mediumWords[] = {"elephant", "sunflower", "chocolate", "pineapple", "kangaroo", "dinosaur", "butterfly", "mountain", "sandstrom", "blueberry"};
        char *hardWords[] = {"missunderstood", "consciousness", "transformation", "unbelievable", "establishment", "consideration", "disappearance", "transportation", "responsibility", "revolutionary"};

        // Temporary buffer to store the chosen word (before and after shuffle)
        char selectedWord[30]; // safe for small words
        switch (mode)
        {
        case 1: // Easy Mode
        {
            int easyCount = sizeof(easyWords) / sizeof(easyWords[0]);
            int index = rand() % easyCount;
            strcpy(selectedWord, easyWords[index]);

            // printf("\nSelected easy word: %s\n", selectedWord);
            break;
        }

        case 2: // Medium Mode
        {
            int mediumCount = sizeof(mediumWords) / sizeof(mediumWords[0]);
            int index = rand() % mediumCount;
            strcpy(selectedWord, mediumWords[index]);

            // printf("\nSelected medium word: %s\n", selectedWord);
            break;
        }

        case 3: // Hard Mode
        {
            int hardCount = sizeof(hardWords) / sizeof(hardWords[0]);
            int index = rand() % hardCount;
            strcpy(selectedWord, hardWords[index]);

            // printf("\nSelected hard word: %s\n", selectedWord);
            break;
        }

        default:
            printf("Invalid choice!\n");
            break;
        }
        char scrambledWord[30];
        shuffleWord(selectedWord, scrambledWord);
        printf("\nGuess the word: ");
        printInColor(scrambledWord, 5); // Purple or any color

        char guess[30];
        printf("\n\nYour Guess: ");
        scanf("%s", guess);

        if (strcmp(guess, selectedWord) == 0)
        {
            printInColor("\nCorrect! You guessed it right!\n", 2); // Green
        }
        else
        {
            printInColor("\nOops! That's not correct.\n", 4); // Red
            printf("Correct word was: %s\n", selectedWord);
        }

        printf("\n Do you want to play again? (Y/N): ");
        scanf(" %c", &playAgain);

        printf("\n\n");

    } while (playAgain == 'Y' || playAgain == 'y');

    printInColor("Thank you for playing! Goodbye!\n", 3); // Cyna
return;
}