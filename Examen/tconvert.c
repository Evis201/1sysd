#include <stdio.h>

float celsius2fahrenheit(float celsius) {
    return (9 / 5) * celsius + 32;
}

float fahrenheit2celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    int choice;
    float temperature;

    printf("Choisir une conversion :\n");
    printf("1. °C vers °F\n");
    printf("2. °F vers °C\n");
    scanf("%d", &choice);

    printf("Entrez la température : ");
    scanf("%f", &temperature);

    if (choice == 1) {
        float fahrenheit = celsius2fahrenheit(temperature);
        printf("%.2f °C correspond à %.2f °F\n", temperature, fahrenheit);
    } else if (choice == 2) {
        float celsius = fahrenheit2celsius(temperature);
        printf("%.2f °F correspond à %.2f °C\n", temperature, celsius);
    } else {
        printf("Choix invalide\n");
    }

    return 0;
}