#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int essais = 0;
    int guess = 0;
    int secret = rand() % 100 + 1;
    while (guess != secret) {
        printf("Quel est le nombre ? ");
        scanf("%d", &guess);
        essais = essais + 1;
        if (guess < secret) {
            printf ("Trop petit\n");
        } else if (guess == secret) {
            printf ("Gagne !\n");
        } else {
            printf ("Trop grand\n");
        }
    }
    printf ("Tu as gagné en %d essais\n", essais);
    return 0;
}