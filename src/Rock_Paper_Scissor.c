#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char generateComputerChoice()
{
    int compChoice = rand() % 3 + 1; // 1=Rock, 2=Paper and 3=Scissor
    if (compChoice == 1)
        return 'R';
    else if (compChoice == 2)
        return 'P';
    else if (compChoice == 3)
        return 'S';
}
void runRockPaperScissorGame()
{
    // Ask name of the user
    char name[34];
    char userMove;
    int n;
    int UserScore = 0, MauCodeScore = 0, DrawCount = 0;

    printf("Enter your name: ");
    scanf("%s", &name);
    printf("\n");
    printf("Hey %s, I'm your opponent.\nMy name is MauCode.\n\n");

    printf("Enter the number of rounds you want to play: ");
    scanf("%d", &n);

    srand(time(NULL)); // Initialize random seed

    printf("\n");

    // Ask user about their choice

    for (int i = 0; i < n; i++)
    {
        printf("\n\n>>>>> ROUND %d <<<<<\n\n", i + 1);
        printf("Choose any one from the following: \n");
        printf("R. Rock\nP. Paper\nS. Scissor\n");
        printf("Enter your choice: ");
        scanf(" %c", &userMove);
        printf("\n");

        // Showing what user choose
        switch (userMove)
        {
        case 'R':
            printf("You have choose: Rock");
            break;

        case 'P':
            printf("You have choose: Paper");
            break;

        case 'S':
            printf("You have choose: Scissor");
            break;

        default:
            printf("Invalid choice! Choose between 1, 2 or 3");
            return; // Exit early on invalid choice
        }

        printf("\n");
        // Now generate and print MauCode's choice
        char computerMove = generateComputerChoice();
        if (computerMove == 'R')
            printf("MauCode's choice: Rock");
        else if (computerMove == 'P')
            printf("Maucode's choice: Paper");
        else if (computerMove == 'S')
            printf("MauCode's choice: Scissor");

        printf("\n\n");

        // Now we have to decide winner
        if (userMove == computerMove)
        {
            printf("DRAW!");
            DrawCount++;
        }
        else if ((userMove == 'R' && computerMove == 'S') ||
                 (userMove == 'P' && computerMove == 'R') ||
                 (userMove == 'S' && computerMove == 'P'))
        {
            printf("%s is the winner of this round", name);
            UserScore++;
        }
        else if ((userMove == 'S' && computerMove == 'R') ||
                 (userMove == 'R' && computerMove == 'P') ||
                 (userMove == 'P' && computerMove == 'S'))
        {
            printf("MauCode is the winner of this round");
            MauCodeScore++;
        }

        printf("\n\n");
    }

    printf("\n\n");
    printf("====== Final Score ======\n\n");
    printf("%s's score: %d\n", name, UserScore);
    printf("MauCode's score: %d\n", MauCodeScore);
    printf("Draws: %d\n", DrawCount);
    printf("\n");

    if (UserScore > MauCodeScore)
    {
        printf("Excellent! %s is the winner of overall game.\n\n", name);
    }
    else if (UserScore < MauCodeScore)
    {
        printf("MauCode is the winner of overall game.\n\n");
    }
    else if (UserScore == MauCodeScore)
    {
        printf("The game ends in a draw overall!\n\n");
    }

return;
}