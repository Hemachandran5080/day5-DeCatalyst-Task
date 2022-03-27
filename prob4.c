#include <stdio.h>

int main()
{
    int matrix[100][100], i, j, n, m, transpose[100][100];
    printf("Enter the row and column size for the matrix: ");
    scanf("%d%d", &n, &m);

    printf("Enter the elements of the matrix: \n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Position of elements[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix Display \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", matrix[i][j]);
            if (j == m - 1)
            {
                printf("\n");
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Transpose of Matrix: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", transpose[i][j]);
            if (j == n - 1)
            {
                printf("\n");
            }
        }
    }

    return 0;
}