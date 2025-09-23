#include <stdio.h>
int main(){
    int n,temp;
    
    printf("entrer la taille du tableau !!!!");
    scanf("%d", &n);
    int m = n;
    int tab[n];

    for(int i = 0; i < n; i++){
        printf("entrer l'element %d :", i);
        scanf("%d", &tab[i]);
    }

    //printf("tableau inverser !!!!!!");

    for(int i = 0; i < n; i++){
        temp = tab[i];
        tab[i] = tab[n-1];
        tab[n-1] = temp;
        n-- ;
    }
    printf("tableau inverser \n");
    for(int i = 0; i < m; i++){
        printf("%d \t", tab[i]);
    }
   return 0; 
}