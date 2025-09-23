#include <stdio.h>
#define MAX 10

void matrixProduct(int mat1[][MAX], int mat2[][MAX], int result[][MAX], int r1, int c1, int r2, int c2) {
    if(c1 != r2) {
        printf("Multiplication not possible!\n");
        return;
    }
    
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for(int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void printMatrix(int mat[][MAX], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[MAX][MAX], mat2[MAX][MAX], result[MAX][MAX];
    int r1, c1, r2, c2;
    
    printf("Enter dimensions of first matrix (rows columns): "); //rows-columns should be separated by a space
    scanf("%d %d", &r1, &c1);
    
    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            printf("mat1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("Enter dimensions of second matrix (rows columns): "); //same as first
    scanf("%d %d", &r2, &c2);
    
    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            printf("mat2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    
    if(c1 != r2) {
        printf("Error: Columns of first matrix must equal rows of second matrix!\n");
        return 1;
    }
    
    matrixProduct(mat1, mat2, result, r1, c1, r2, c2);
    
    printf("\nFirst Matrix:\n");
    printMatrix(mat1, r1, c1);
    
    printf("\nSecond Matrix:\n");
    printMatrix(mat2, r2, c2);
    
    printf("\nProduct Matrix:\n");
    printMatrix(result, r1, c2);
    
    return 0;
}
