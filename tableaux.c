#include <stdio.h>
#define TAILLE 6

int main(void) {
    int notes[TAILLE] = {12, 15, 8, 10, 17, 14};
    int somme = 0;
    notes[2] = 20;

    for (int i = 0; i < TAILLE; i++) {
        somme = somme + notes[i];
        printf("%d : %d\n", i, notes[i]);
    }

    
    printf("Somme : %d\n", somme);
    printf("Moyenne : %.2f\n", somme / (double) TAILLE);
    return 0;
}