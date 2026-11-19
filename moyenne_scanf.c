#include <stdio.h>

int main(void) {
    int a;
    int b;
    int c;
    printf("Ta première note ? ");
    scanf("%d", &a);
    printf("Ta deuxième note ? ");
    scanf("%d", &b);
    printf("Ta troisième note ? ");
    scanf("%d", &c);
    int somme = a + b + c;
    double moyenne = somme / 3.0;
    printf("La moyenne de tes notes est de %.2f\n", moyenne);
    return 0;
}