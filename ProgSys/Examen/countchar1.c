#include<stdio.h>
#include<stdlib.h>

int count_char(char* chaine, char car) {
    int count = 0;
    for (int i=0; chaine[i] !='\0'; i++) {
        if (chaine[i] == car) {
            count++;
        }
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 3 || argc > 4) {
        printf("Utilisation : <chaine> <char>\n");
        return 1;
    }
        
    char* chaine = argv[1];
    char car = argv[2][0];

    printf("Nombre d'occurences : %d\n", count_char(chaine, car));
    return 0;
}