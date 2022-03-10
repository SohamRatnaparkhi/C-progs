#include <stdio.h>
int main()
{
    int r, c;
    printf("Rows : ");
    scanf("%d", &r);
    printf("Columns : ");
    scanf("%d", &c);
    int matrixa[r][c];
    int matrixb[r][c];
    // Input
    printf("\nEnter elements in matrix A : ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrixa[i][j]);
        }
    }
    // Display matrix a,
    printf("Matrix A\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d  ", matrixa[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter elements in matrix B : ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrixb[i][j]);
        }
    }
    // printing B
    printf("Matrix B\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d  ", matrixb[i][j]);
        }
        printf("\n");
    }

    // Summation and substraction
    int matrixsum[r][c];
    int matrixsub[r][c];

    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            int sum = 0, sub = 0;
            sum += (matrixa[i][j] + matrixb[i][j]);
            matrixsum[i][j] = sum;
            sub -= (matrixa[i][j] - matrixb[i][j]);
            matrixsub[i][j] = sub;
        }
    }
    // printing sum
    printf("\nMatrix A + Matrix B = \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d  ", matrixsum[i][j]);
        }
        printf("\n");
    }
    // printing sub
    printf("\nMatrix A - Matrix B = \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d  ", matrixsub[i][j]);
        }
        printf("\n");
    }

    // Transpose
    int transposea[c][r];
    int transposeb[c][r];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            transposea[j][i] = matrixa[i][j];
            transposeb[j][i] = matrixb[i][j];
        }
    }

    // Printing transpose
    printf("\nA transpose\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d  ", transposea[i][j]);
        }
        printf("\n");
    }

    printf("\nB transpose\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d  ", transposeb[i][j]);
        }
        printf("\n");
    }

    // Multiplication A * B
    int mul[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < c; k++)
            {
                mul[i][j] += matrixa[i][k] * matrixb[k][j];
            }
        }
    }
    // Printing
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d  ", mul[i][j]);
        }
        printf("\n");
    }
}