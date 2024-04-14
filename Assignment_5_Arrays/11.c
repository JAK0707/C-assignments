#include<stdio.h>

//To add, multiply and transpose of a matrix

int main() {
    int mat1[2][2], mat2[2][2], trans1[2][2], trans2[2][2], sum[2][2], product[2][2];
    
    // Input elements of the first matrix
    printf("Enter elements of first matrix: ");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    // Input elements of the second matrix
    printf("Enter elements of second matrix: ");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    // Print the original matrices
    printf("\nOriginal Matrices:\n");
    printf("First Matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond Matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    
    // Calculate transpose of the first matrix
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            trans1[j][i] = mat1[i][j];
        }
    }
    
    // Calculate transpose of the second matrix
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            trans2[j][i] = mat2[i][j];
        }
    }
    
    // Find the sum of the two matrices
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    
    // Find the product of the two matrices
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            product[i][j] = 0;
            for(int k = 0; k < 2; k++) {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    
    // Print the transpose of the first matrix
    printf("\nTranspose of first matrix: \n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", trans1[i][j]);
        }
        printf("\n");
    }
    
    // Print the transpose of the second matrix
    printf("\nTranspose of second matrix: \n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", trans2[i][j]);
        }
        printf("\n");
    }
    
    // Print the sum of the two matrices
    printf("\nSum of matrices: \n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    // Print the product of the two matrices
    printf("\nProduct of matrices: \n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}