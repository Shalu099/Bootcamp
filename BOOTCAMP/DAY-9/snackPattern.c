#include <stdio.h>
int main()
{
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  //  int snake[3][3];
    for (int i = 0; i < 3; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < 3; j++)
                printf("%d ", a[i][j]);
        }
        else
        {
            for (int j = 3 - 1; j >= 0; j--)

                printf("%d ", a[i][j]);
        }
        printf("\n");
    }

return 0;
}