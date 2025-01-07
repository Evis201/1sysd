#include<stdio.h>

void printtab(int *tab, int size) {

    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

// TODO: à vous
void multtab(int t1[], int t2[], int size1, int size2, int result[]) {
    int min_size = size1 < size2 ? size1 : size2;
    for (int i = 0; i < min_size; i++) {
        result[i] = t1[i] * t2[i];
    }
}

int main() {
    int tab1[] = { 2, 3, 42, 12, 9,  0 };
    int tab2[] = { 6, 7, 9,  10, 11, 88 };
    int tab3[] = { 6, 8, 10 };
    int result[6];

    printf("tab1 : ");
    printtab(tab1, 6);

    printf("tab2 : ");
    printtab(tab2, 6);
    
    multtab(tab1, tab2, 6, 6, result);
    printf("multtab(tab1, tab2, 6, 6, ...) : ");
    printtab(result, 6);
    
    printf("tab3 :");
    printtab(tab3, 3);

    multtab(tab1, tab3, 6, 3, result);
    printf("multtab(tab1, tab3, 6, 3, ...)  : ");
    printtab(result, 3);

    multtab(tab3, tab2, 3, 6, result);
    printf("multtab(tab3, tab2, 6, 3, ...)  : ");
    printtab(result, 3);

}

