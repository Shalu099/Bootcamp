#include <stdio.h>
int main()
{
    int n = 5, i, j, space;
    for (i = 5; i >= 1; i--)
    {
        for (space = 0; space < n - i; space++)
            printf("  ");
        for (j = i; j <= 2 * i - 1; j++)
            printf("* ");
        for (j = 0; j < i - 1; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}