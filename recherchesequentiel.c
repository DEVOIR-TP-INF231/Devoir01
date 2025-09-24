#include <stdio.h>

int recherche_sequentielle(int tab[], int taille, int valeur) {
    for (int i = 0; i < taille; i++) {
        if (tab[i] == valeur) {
            return i;
        }
    }
    return -1;
}

int main() {
    int taille;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    int tab[100]; // Taille maximale du tableau
    if (taille > 100 || taille <= 0) {
        printf("Taille invalide.\n");
        return 1;
    }

    printf("Entrez les elements du tableau :\n");
    for (int i = 0; i < taille; i++) {
        scanf("%d", &tab[i]);
    }

    int valeur;
    printf("Entrez la valeur à rechercher : ");
    scanf("%d", &valeur);

    int indice = recherche_sequentielle(tab, taille, valeur);

    if (indice != -1) {
        printf("Valeur %d trouvée à l'indice %d.\n", valeur, indice);
    } else {
        printf("Valeur %d non trouvée dans le tableau.\n", valeur);
    }

    return 0;
}