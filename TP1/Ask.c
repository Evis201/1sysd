#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int nombreAleatoire = rand() % 10 + 1;
    int tentative, nombreEssais = 0;
    
    printf("Devinez le nombre entre 1 et 10\n");

    do {
        printf("Votre proposition : ");
        scanf("%d", &tentative);
        
         if (tentative < 0) {
            printf("Veuillez entrer un nombre positif.\n");
            continue;
        }
        
        nombreEssais++;

        if (tentative < nombreAleatoire) {
            printf("Plus grand !\n");
        } else if (tentative > nombreAleatoire) {
            printf("Plus petit !\n");
        } else {
            printf("Bravo ! Vous avez trouvé le nombre en %d essais.\n", nombreEssais);
        }

    } while (tentative != nombreAleatoire);

    return 0;
}

