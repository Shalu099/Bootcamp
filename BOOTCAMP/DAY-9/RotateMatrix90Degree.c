#include <stdio.h>

void rotate90(int matrix[][2], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
            printf("%d", matrix[j][i]);
        printf("\n");
    }
}

int main()
{
    int matrix[2][2] = {{3, 2}, {1, 5}};

    rotate90(matrix, 2);

    return 0;
}