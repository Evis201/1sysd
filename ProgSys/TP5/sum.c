#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <nombre1> <nombre2> ... <nombreN>\n", argv[0]);
        return 1;
    }

    double somme = 0.0;

    for (int i = 1; i < argc; ++i) {
        double nombre = atof(argv[i]);

        somme += nombre;
    }

    printf("Somme : %.2f\n", somme);

    return 0;
}

