// THE SHELL INTERFACE (USER COMMAND INPUT)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "time_module.h"
#include "games.h"
#include "cal.h"
#include "Mensuration.h"
#include "Units.h"

void startShell()
{
    char command[100]; // To store user command

    srand(time(NULL)); // Seed for random number generation

    while (1)
    {
        printf("(Type your command below)\n");
        printf("\033[1;35mShadowOS: \033[0m");  // Purple prompt
        fgets(command, sizeof(command), stdin); // Get input

        command[strcspn(command, "\n")] = '\0';

        if (strcmp(command, "help") == 0)
        {
            // Underlined cyan heading
            printf("\n\n\033[4;36m----Available Commands----\033[0m\n");

            // Commands with colored left side and white right side
            printf("  \033[1;33mhelp          --    \033[0m- Show all available commands\n");
            printf("  \033[1;33mabout         --    \033[0m- Info about ShadowOS\n");
            printf("  \033[1;33mquote         --    \033[0m- Show a random tech/coding quote\n");
            printf("  \033[1;33mtime          --    \033[0m- Show the current time\n");
            printf("  \033[1;33mdate          --    \033[0m- Show the current date\n");
            printf("  \033[1;33munit          --    \033[0m- Unit conversions\n");
            printf("  \033[1;33mchatbot       --    \033[0m- Talk with ShadowBot (AI Chatbot)\n");
            printf("  \033[1;33mgame          --    \033[0m- Play in-built games\n");
            printf("  \033[1;33mcalculator    --    \033[0m- Launch calculator\n");
            printf("  \033[1;33mmensuration   --    \033[0m- Launch Mensurational calculator\n");
            printf("  \033[1;33mclear         --    \033[0m- Clear the terminal\n");
            printf("  \033[1;33mexit          --    \033[0m- Exit ShadowOS\n\n");
        }
        else if (strcmp(command, "about") == 0)
        {
            printf("\033[1;34mShadowOS-AI -- A terminal-based virtual OS simulator.\n");
            printf("Version 1.0 | Built in C | Future AI integration planned.\033[0m\n");
        }
        else if (strcmp(command, "time") == 0)
        {
            showTime(); // From time_module.c
        }
        else if (strcmp(command, "date") == 0)
        {
            showDate(); // From time_module.c
        }
        else if (strcmp(command, "chatbot") == 0) 
        {
            printf("\n[ShadowOS] Launching ShadowBot...\n\n");
            system("python shadowbot.py");
            printf("\n[ShadowOS] Exiting ShadowBot. Returning to shell...\n");
        }
        else if (strcmp(command, "unit") == 0)
        {
            unit();
        }
        else if (strcmp(command, "quote") == 0)
        {
            const char *quotes[] = {
                "Code the change you wish to see in the world.",
                "Dream in logic, live in syntax.",
                "Every bug is a lesson in disguise.",
                "Build like a human, think like a machine.",
                "AI is the assistant - you are the creator.",
                "The future is code. Write it wisely.",
                "Create software that serves society, not just users."
                "Talk is cheap. Show me the code. - Linus Torvalds",
                "Programs must be written for people to read, and only incidentally for machines to execute. - Harold Abelson",
                "First, solve the problem. Then, write the code. - John Johnson",
                "Code is like humor. When you have to explain it, it's bad. - Cory House",
                "Simplicity is the soul of efficiency. - Austin Freeman",
                "Any fool can write code that a computer can understand. Good programmers write code that humans can understand. - Martin Fowler",
                "Programming isn't about what you know; it's about what you can figure out. - Chris Pine",
                "Experience is the name everyone gives to their mistakes. - Oscar Wilde",
                "Fix the cause, not the symptom. - Steve Maguire",
                "Deleted code is debugged code. - Jeff Sickel",
                "Computers are fast; programmers keep it slow.",
                "One man's crappy software is another man's full-time job. - Jessica Gaston",
                "Make it work, make it right, make it fast. - Kent Beck"};
            int totalQuotes = sizeof(quotes) / sizeof(quotes[0]);
            int randomIndex = rand() % totalQuotes;

            printf("\033[1;35m Quote of the Moment:\033[0m\n");
            printf("\033[1;36m\"%s\"\033[0m\n", quotes[randomIndex]);
        }
        else if (stricmp(command, "game") == 0)
        {
            LaunchGameMenu();
        }
        else if (strcmp(command, "calculator") == 0)
        {
            calculator(); // From cal.c
        }
        else if (strcmp(command, "mensuration") == 0)
        {
            Mensuration();
        }
        else if (strcmp(command, "clear") == 0)
        {
            int result = 0;

#ifdef _WIN32
            result = system("cls"); // for windows
#else
            result = system("clear"); // for linux/MacOS
#endif

            if (result != 0)
            {
                printf("\033[1;31m Unable to clear the screen. This command may not be supported in your terminal.\033[0m\n");
            }
        }
        else if (strcmp(command, "exit") == 0)
        {
            printf("\033[1;31mExiting ShadowOS... Goodbye!\033[0m\n");
            break;
        }

        else
        {
            printf("Type \033[1;36m'help'\033[0m to see available commands.\n");
        }
    }
}
