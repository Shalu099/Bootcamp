#include <stdio.h>

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int top = 0, down = 2, left = 0, right = 2;

    while (top <= down && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            printf("%d ", matrix[top][i]);
        }
        top++;

        for (int i = top; i <= down; i++)
        {
            printf("%d ", matrix[i][right]);
        }
        right--;

        if (top <= down)
        {

            for (int i = right; i >= left; i--)
            {
                printf("%d ", matrix[down][i]);
            }
            down--;
        }

        if (left <= right)
        {

            for (int i = down; i >= top; i--)
            {
                printf("%d ", matrix[i][left]);
            }
            left++;
        

        }
    }

    return 0;
}
