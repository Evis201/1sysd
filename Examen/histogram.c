#include <stdio.h>

void display_histogram(int tab[], int size) {
    // Valeur maximale 
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < tab[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int values[] = { 4, 9, 8, 2, 0, 1, 10, 5, 8 };

    display_histogram(values, 9);

    // return 0;
}

