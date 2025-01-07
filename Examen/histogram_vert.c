#include <stdio.h>

void display_histogram_vert(int tab[], int size) {
    int max = 0;
    for (int i = 0; i < size; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }

    for (int i = max; i > 0; i--) {
        printf("%2d|", i);
        for (int j = 0; j < size; j++) {
            if (tab[j] >= i) {
                printf(" * ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }

    printf(" 0|");
    for (int i = 0; i < size; i++) {
        printf(" %d ", tab[i]);
    }
    printf("\n");
}

int main() {
    int tab[] = {4, 9, 8, 2, 0, 1, 10, 5, 8};
    int size = sizeof(tab) / sizeof(tab[0]);

    display_histogram_vert(tab, size);

    //return 0;
}
