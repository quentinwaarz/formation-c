#include <stdio.h>

int main(void) {
    int age;
    int annee;
    printf("Ton âge ? ");
    scanf("%d", &age);
    printf("Ton année de naissance ? ");
    scanf("%d", &annee);
    printf("Nous sommes en l'an %d\n", age + annee);
    return 0;
}