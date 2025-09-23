#include <stdio.h>
#include <time.h>

void showTime()
{
    time_t rawtime;
    struct tm *timeinfo;
    char buffer[80];

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer, sizeof(buffer), "%I:%M:%S %p", timeinfo);  // 12-hour format
    printf("\033[1;34mCurrent Time:\033[0m %s\n", buffer);
}

void showDate()
{
    time_t rawtime;
    struct tm *timeinfo;
    char buffer[80];

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer, sizeof(buffer), "%d-%m-%Y", timeinfo);
    printf("\033[1;34mToday's Date:\033[0m %s\n", buffer);
}
