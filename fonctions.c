#include <stdio.h>

int carre(int n) {
    return n * n;
}

double moyenne3(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

int main(void) {
    int resultat = carre(7);
    printf("%d\n", resultat);
    printf("%.2f\n", moyenne3(12, 15, 8));
    return 0;
}