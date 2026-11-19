#include <stdio.h>

int main(void) {
    int a = 12;
    int b = 15;
    int c = 8;
    int somme = a + b + c;
    double moyenne = somme / 3.0;
    printf("La somme vaut %d\n", somme);
    printf("La moyenne vaut %.2f\n", moyenne);
    return 0;
}