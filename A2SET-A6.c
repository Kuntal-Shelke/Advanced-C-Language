#include <stdio.h>
int main()
 {
    int m, n;
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);
    int A[m][n], B[n][m];  
    printf("Enter the elements of matrix A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("Enter A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);  
        }
    }
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            B[j][i] = A[i][j];  
        }
    }
    printf("\nmatrix A \n");
    for (int i = 0; i < m; i++)
     {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ",A[i][j]);  
        }
        printf("\n");
    }
    printf("\nTranspose of matrix A is matrix B (size %d x %d):\n", n, m);
    for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < m; j++) 
        {
            printf("%d ", *((int*)B + i * m + j));  
        }
        printf("\n");
    }
}

