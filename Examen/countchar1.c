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
    char* chaine = argv[1];
    char car = argv[2][0];

    printf("%d\n", count_char(chaine, car));
    return 0;
}