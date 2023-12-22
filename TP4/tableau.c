#include <stdio.h>

int main() {
    int tableau[5];
    float moyenne = 0;
    int plusPetit, plusGrand;

    printf("Veuillez entrer 5 nombres (maximum 50):\n");

    for (int i = 0; i < 5; ++i) {
        printf("Nombre %d : ", i + 1);
        scanf("%d", &tableau[i]);

        if (tableau[i] > 50) {
            printf("Le nombre doit être inférieur ou égal à 50. Veuillez entrer un nombre valide.\n");
            --i;
        }
    }

    plusPetit = plusGrand = tableau[0];

    printf("Contenu du tableau : ");
    
    for (int i = 0; i < 5; ++i) {
        printf("%d ", tableau[i]);

        if (tableau[i] < plusPetit) {
            plusPetit = tableau[i];
        }

        if (tableau[i] > plusGrand) {
            plusGrand = tableau[i];
        }

        moyenne += tableau[i];
    }

    moyenne /= 5;

    printf("\nMoyenne : %.2f\n", moyenne);
    printf("Plus petit élément : %d\n", plusPetit);
    printf("Plus grand élément : %d\n", plusGrand);

    return 0;
}

