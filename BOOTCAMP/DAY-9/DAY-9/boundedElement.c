#include <stdio.h>

void printBoundary(int m[][3], int r, int c)
{
    if (r <= 0 || c <= 0) return; // Check for valid dimensions

    // Print the first row
    for (int i = 0; i < c; i++)
        printf("%d ", m[0][i]);
    
    // Print the last column
    for (int i = 1; i < r; i++)
        printf("%d ", m[i][c - 1]);
    
    // Print the last row if there is more than one row
    if (r > 1) {
        for (int i = c - 2; i >= 0; i--)
            printf("%d ", m[r - 1][i]);
    }
    
    // Print the first column if there is more than one column
    if (c > 1) {
        for (int i = r - 2; i > 0; i--)
            printf("%d ", m[i][0]);
    }
}

int main()
{
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}}; // Adjusted to 3 columns
    printBoundary(matrix, 2, 3);
    return 0;
}
