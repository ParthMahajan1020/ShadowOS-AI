// MAIN ENTRY POINT
// gcc shadow.c shell.c time_module.c Number_Guessing.c Rock_Paper_Scissor.c Word_Scramble.c games.c cal.c utils.c Mensuration.c Units.c -o shadowOS
#include <stdio.h>
#include "shell.h"
#include "utils.h"

int main()
{
    printf("\n\n");
    // Welcome Message
    printf("\033[4;33m ShadowOS-AI v1.0 -- Code. Think. Evolve.\033[0m\n");
    printf("\033[1;32m Powered by logic. Guided by awareness. Built for the future.\033[0m\n");
    printf("\033[1;36m Be the developer who writes not just code -- but change.\033[0m\n");
    printf("\033[1;33m Integrating AI, ethics, and imagination -- one command at a time.\033[0m\n");

    showAllCommands(); // Display all commands

    startShell();
    return 0;
}
