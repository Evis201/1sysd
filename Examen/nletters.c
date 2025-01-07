#include <stdio.h>
#include <ctype.h>

// TODO: à vous
int n_letters(char *s) {
    int count = 0;
    while (*s) {
        if (isalpha(*s)) {
            count++;
        }
        s++;
    }
    return count;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s text\n", argv[0]);
        return 1;
    }

    int count = n_letters(argv[1]);
    printf("%d\n", count);

    return 0;
}
