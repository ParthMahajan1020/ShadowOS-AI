#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "utils.h"
#include "games.h"

void LaunchGameMenu()
{
    char message[50];
    sprintf(message, "\n\n---------- GAME MENU ----------\n\n");
    typeEffect(message);

    int choice;
    printf("1. Number-Guessing Game\n");
    printf("2. Rock-Paper-Scissor Game\n");
    printf("3. Word-Scramble Game\n");

    printf("Your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        runNumberGuessingGame();
        break;
    
        case 2:
        runRockPaperScissorGame();
        break;
    case 3:
        runWordScrambleGame();
        break;
    
    default:
    printf("Invalid choice\n");
        break;
    }
}