#include<stdio.h>
double delta(double a, double b, double c){
    return b*b - 4*a*c;
}
double check(double *a){
     while (1) {
        printf("Please enter a number: ");
        int state = scanf("%lf", a);    
        if (state != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // INFINITE LOOP
            continue;
        } else {
            break;
        }
    }
}
int main(){
    printf("you will need to choose 3 argument\n");
    double a, b, c;
    printf("Enter the first number: \n");
    check(&a);
    printf("Enter the second number: \n");
    check(&b);
    printf("Enter the third number: \n");
    check(&c);
    printf("The delta is: %lf\n", delta(a, b, c));
}