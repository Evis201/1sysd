#include<stdio.h>

int number_count(char c[]){
    int i = 0;
    int count = 0;
    while(c[i] != '\0'){
        if(c[i] >= '0' && c[i] <= '9'){
            count++;
        }
        i++;
    }
    return count;
}


int main(){
    char c[101];
    printf("Entrez une chaîne de caractères contenant aussi des chiffres: \n");
    scanf("%100s", c);
    printf("Il y a %d chiffres dans la chaîne.\n %c", number_count(c), c);
}