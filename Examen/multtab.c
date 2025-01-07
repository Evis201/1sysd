#include<stdio.h>

void printtab(int *tab, int size) {

    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

// TODO: à 
void multtab(int t1[], int t2[], int size, int result[]) {
    for (int i = 0; i < size; i++) {
        result[i] = t1[i]*t2[i];
    }
}

int main() {
    int tab1[] = { 2, 3, 42, 12, 9,  0 };
    int tab2[] = { 6, 7, 9,  10, 11, 88 };
    int result[6];

    printf("tab1 : ");
    printtab(tab1, 6);

    printf("tab2 : ");
    printtab(tab2, 6);

    multtab(tab1, tab2, 6, result);

    printf("multtab(tab1, tab2, 6, ...) : ");
    printtab(result, 6);
}
