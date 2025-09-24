#include <stdio.h>

// Fonction pour calculer le produit vectoriel de deux vecteurs 3D
void produit_vectoriel(const float a[3], const float b[3], float resultat[3]) {
    resultat[0] = a[1]*b[2] - a[2]*b[1];
    resultat[1] = a[2]*b[0] - a[0]*b[2];
    resultat[2] = a[0]*b[1] - a[1]*b[0];
}

int main() {
    float v1[3], v2[3], res[3];

    printf("Entrez les composantes du premier vecteur (x y z): ");
    scanf("%f %f %f", &v1[0], &v1[1], &v1[2]);

    printf("Entrez les composantes du second vecteur (x y z): ");
    scanf("%f %f %f", &v2[0], &v2[1], &v2[2]);

    produit_vectoriel(v1, v2, res);

    printf("Produit vectoriel: (%.2f, %.2f, %.2f)\n", res[0], res[1], res[2]);

    return 0;
}