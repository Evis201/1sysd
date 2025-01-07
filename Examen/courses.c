#include<stdio.h>

typedef struct prod prod;
struct prod {
    char name[50];
    double price;
}

// TODO: à vous

int main() {
    prod courses[] = { { "Pommes", 2.23 }, { "Poires", 3.10 }, { "Cerises", 6.15 } };

    int quantities[] = { 4, 5, 10 };

    mescourses(courses, quantities, 3);

}
