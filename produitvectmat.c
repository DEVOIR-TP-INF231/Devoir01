#include <stdio.h>

#define N 3 // Taille du vecteur
#define M 3 // Nombre de colonnes de la matrice

void produit_vecteur_matrice(float vecteur[N], float matrice[N][M], float resultat[M]) {
    for (int j = 0; j < M; j++) {
        resultat[j] = 0.0f;
        for (int i = 0; i < N; i++) {
            resultat[j] += vecteur[i] * matrice[i][j];
        }
    }
}

int main() {
    float vecteur[N];
    float matrice[N][M];
    float resultat[M];

    // Saisie du vecteur
    printf("Entrez les %d éléments du vecteur :\n", N);
    for (int i = 0; i < N; i++) {
        printf("vecteur[%d] = ", i);
        scanf("%f", &vecteur[i]);
    }

    // Saisie de la matrice
    printf("Entrez les éléments de la matrice (%d lignes x %d colonnes) :\n", N, M);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("matrice[%d][%d] = ", i, j);
            scanf("%f", &matrice[i][j]);
        }
    }

    produit_vecteur_matrice(vecteur, matrice, resultat);

    printf("Résultat du produit vecteur-matrice :\n");
    for (int j = 0; j < M; j++) {
        printf("%.2f ", resultat[j]);
    }
    printf("\n");

    return 0;
}