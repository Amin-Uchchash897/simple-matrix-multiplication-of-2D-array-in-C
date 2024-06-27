// Write a C program to multiplication of 2D Array.

#include <stdio.h>

int main()
{
    int row, col, r1, c1, r2, c2, i, j, k;
    int A[100][100], B[100][100], C[100][100];
    int sum = 0, result[100][100];

    printf("Enter rows and columns for first matrix : ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix : ");
    scanf("%d %d", &r2, &c2);

    while (c1 != r2)
    {
        printf("Error! The columns of first matrix and the rows of second matrix is not equal.\n");
        printf("Enter rows and columns for first matrix : ");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows and columns for second matrix : ");
        scanf("%d %d", &r2, &c2);
    }

    printf("Enter elements for first matrix : \n");
    for (row = 0; row < r1; row++)
    {
        for (col = 0; col < c1; col++)
        {
            printf("A[%d][%d] = ", row, col);
            scanf("%d", &A[row][col]);
        }
        printf("\n");
    }

    printf("Enter elements for second matrix : \n");
    for (row = 0; row < r2; row++)
    {
        for (col = 0; col < c2; col++)
        {
            printf("B[%d][%d] = ", row, col);
            scanf("%d", &B[row][col]);
        }
        printf("\n");
    }

    // Multiplying Matrix
    for (row = 0; row < r1; row++)
    {
        for (col = 0; col < c2; col++)
        {
            for (k = 0; k < c1; k++)
            {
                sum += A[row][k] + B[k][col];
            }
            result[row][col] = sum;
            sum = 0;
        }
    }

    printf("A = ");
    for (row = 0; row < r1; row++)
    {
        printf("\t");
        for (col = 0; col < c1; col++)
        {
            printf("%d ", A[row][col]);
        }
        printf("\n");
    }
    printf("\n");
    printf("B = ");
    for (row = 0; row < r2; row++)
    {
        printf("\t");
        for (col = 0; col < c2; col++)
        {
            printf("%d ", B[row][col]);
        }
        printf("\n");
    }

    // Printing the Result Matrix
    printf("\nResult matrix = ");
    for (row = 0; row < r1; row++)
    {
        for (col = 0; col < c2; col++)
        {
            printf("%d ", result[row][col]);
        }
        printf("\n");
        printf("\t\t");
    }

    getchar();
}