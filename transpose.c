#include <stdio.h>

int main() {
    int i, j, m, n;

    // Input the dimensions of the matrix
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n], transpose[n][m]; // Declaring matrix and its transpose

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) //rows
	{
        for (j = 0; j < n; j++)//cols
	    {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Finding the transpose of the matrix
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Output the original matrix
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Output the transpose of the matrix
    printf("\nTranspose of the Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

