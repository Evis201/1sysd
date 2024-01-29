#include<stdio.h>
#include<stdlib.h>
#include<string.h> // Pour avoir strlen !


// Renvoie 0 si pas un palindrome,
// renvoie 1 si est un palindrome
int palindrome(char *s) {
  // TODO
}

int main() {
    char word1[] = "radar";     // palindrome impair (5)
    char word2[] = "serres";    // palindrome pair (6)
    char word3[] = "hexagone";  // pas un palindrome

    char *words[] = { word1, word2, word3 };
    for (int i = 0; i < 3; i++) {
        if (palindrome(words[i])) {
            printf("%s est un palindrome.\n", words[i]);
        } else {
            printf("%s n'est pas un palindrome.\n", words[i]);
        }
    }
    exit(0);
}
