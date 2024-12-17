#include<stdio.h>

int check(int *a){
     while (1) {
        printf("Please enter a number: ");
        int state = scanf("%d", a);    
        if (state != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // INFINITE LOOP
            continue;
        } else {
            break;
        }
    }
}

int somme(int c[], int n){
    int i = 0;
    int somme = 0;
    n = n/sizeof(int);
    while(i < n){
        somme += c[i];
        i++;
    }
    return somme;
}

int main(){
    int a;
    printf("choisissez la taille du tableau \n");
    check(&a); 
    int c[a];
    printf("Entrez %d entiers: \n" , a);
    for(int i = 0; i < a; i++){
        check(&c[i]);
    }
    int n = sizeof(c);
    printf("La somme des éléments du tableau est: %d\n", somme(c, n));

}