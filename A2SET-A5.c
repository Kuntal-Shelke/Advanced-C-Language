#include<stdio.h>
int main() 
{
    int m, n;
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);
    int matrix[m][n];
    printf("Enter the elements of the %dx%d matrix:\n", m, n);
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("Enter element at position (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nMatrix A:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    int max = matrix[0][0];  // Assume the first element is the maximum initially
    for(int i = 0; i < m; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            if(matrix[i][j] > max) 
            {
                max = matrix[i][j];
            }
        }
    }
    printf("\nThe maximum element in the matrix is: %d\n", max);
    return 0;
}

