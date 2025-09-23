// utils.c
#include <windows.h>
#include <stdio.h>

void typeEffect(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
        fflush(stdout);
        Sleep(35);
    }
    printf("\n\n");
}

void showAllCommands()
{
    // Underlined cyan heading
    printf("\n\n\033[4;36m----Available Commands----\033[0m\n");

    // Commands with colored left side and white right side
    printf("  \033[1;33mhelp        --    \033[0m- Show all available commands\n");
    printf("  \033[1;33mabout       --    \033[0m- Info about ShadowOS\n");
    printf("  \033[1;33mquote       --    \033[0m- Show a random tech/coding quote\n");
    printf("  \033[1;33mtime        --    \033[0m- Show the current time\n");
    printf("  \033[1;33mdate        --    \033[0m- Show the current date\n");
    printf("  \033[1;33munit        --    \033[0m- Unit conversions\n");
    printf("  \033[1;33mchatbot     --    \033[0m- Talk with ShadowBot (AI Chatbot)\n");
    printf("  \033[1;33mgame        --    \033[0m- Play in-built games\n");
    printf("  \033[1;33mcalculator  --    \033[0m- Launch calculator\n");
    printf("  \033[1;33mmensuration --    \033[0m- Launch Mensurational calculator\n");
    printf("  \033[1;33mclear       --    \033[0m- Clear the terminal\n");
    printf("  \033[1;33mexit        --    \033[0m- Exit ShadowOS\n\n");
}
