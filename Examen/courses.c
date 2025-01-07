#include <stdio.h>

typedef struct prod prod;
struct prod {
    char name[50];
    double price;
};

// TODO: à vous

void mescourses(prod tab[], int quantities[], int size) {
    double total_cost = 0.0; // Valeur par défaut
    printf("----------------\n  Mes courses\n----------------\n");
    for (int i = 0; i < size; i++) {
        double item_total = tab[i].price * quantities[i];
        printf("%s\n  Prix   : %.2f\n  Nombre : %d\n  Total  : %.2f\n", tab[i].name, tab[i].price, quantities[i], item_total);
        total_cost += item_total;
    }
    printf("----------------\nTOTAL    : %.2f\n", total_cost);
}

int main() {
    prod courses[] = { { "Pommes", 2.23 }, { "Poires", 3.10 }, { "Cerises", 6.15 } };

    int quantities[] = { 4, 5, 10 };

    mescourses(courses, quantities, 3);

    // return 0;
}
