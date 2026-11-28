#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char prenom[20] = "Quentin";
    int taille = strlen(prenom);
    int voyelles = 0;
    printf("Bonjour %s\n", prenom);
    for (int i = 0; i < taille; i++)
    {
        printf("%d : %c\n", i, prenom[i]);
        char c = tolower(prenom[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
        {
            voyelles = voyelles + 1;
        }
    }
    printf("La taille est de %d lettres\n", taille);
    printf("Il y a %d voyelles\n", voyelles);
    return 0;
}