#include <stdio.h>
#define MAX 10

void matrixSum(int mat1[][MAX], int mat2[][MAX], int result[][MAX], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
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
    int rows, cols;
    
    printf("Enter number of rows and columns: "); //same format as the matrix product
    scanf("%d %d", &rows, &cols);
    
    printf("Enter first matrix elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("mat1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("Enter second matrix elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("mat2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    
    matrixSum(mat1, mat2, result, rows, cols);
    
    printf("\nFirst Matrix:\n");
    printMatrix(mat1, rows, cols);
    
    printf("\nSecond Matrix:\n");
    printMatrix(mat2, rows, cols);
    
    printf("\nSum Matrix:\n");
    printMatrix(result, rows, cols);
    
    return 0;
}
