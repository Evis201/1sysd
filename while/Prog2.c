#include <stdio.h>

int main() {
    int nombre = 1;

    while (nombre <= 50) {
        int carre = nombre * nombre;
        printf("Le carré de %d est %d\n", nombre, carre);
        nombre++;
    }

    return 0;
}
