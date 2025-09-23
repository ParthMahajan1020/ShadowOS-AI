#include <stdio.h>

void unit()
{

    int x;
    float celsius, fahrenheit, kelvin, rankine;

    printf("1. Fahrenheit\n");
    printf("2. Kelvin\n");
    printf("3. Rankine\n");

    printf("Choose between 1 to 3\n:");
    scanf("%d", &x);

    switch (x)
    {
    case 1:

        printf("Enter the temperture in celsius:\n");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("Temperature in fahrenheit: %.2f\n", fahrenheit);

        break;

    case 2:

        printf("Enter the temperture in celsius:\n");
        scanf("%f", &celsius);
        kelvin = celsius + 273.15;
        printf("Temperature in kelvin: %.2f\n", kelvin);

        break;

    case 3:

        printf("Enter the temperture in celsius:\n");
        scanf("%f", &celsius);
        rankine = (celsius + 273.15) * 9 / 5;
        ;
        printf("Temperature in rankine: %.2f\n", rankine);

        break;

    default:

        printf("Error: Choose between 1 to 3.\n");

        break;
    }

    return;
}
