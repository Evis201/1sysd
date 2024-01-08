#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <nombre1> <nombre2> <opérateur>\n", argv[0]);
        return 1;
    }

    double nombre1, nombre2, resultat;
    char operateur = argv[3][0];

    nombre1 = strtod(argv[1], NULL);
    nombre2 = strtod(argv[2], NULL);

    switch (operateur) {
        case '+':
            resultat = nombre1 + nombre2;
            break;
        case '-':
            resultat = nombre1 - nombre2;
            break;
        case '*':
            resultat = nombre1 * nombre2;
            break;
        case '/':
            if (nombre2 != 0) {
                resultat = nombre1 / nombre2;
            } else {
                printf("Division par zéro impossible.\n");
                return 1;
            }
            break;
        default:
            printf("Opérateur non valide.\n");
            return 1;
    }

    printf("Résultat : %.2f\n", resultat);
    return 0;
}

