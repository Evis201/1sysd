#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main(int argc, char *argv[]) {
    for (int i = argc - 1; i > 0; i--) {
        reverse(argv[i]);
        printf("%s\n", argv[i]);
    }
    
    return 0;
}
