#include <stdio.h>
int main()
{
    int n = 9, sum = 0;
    // printf("enter the length:");
    // scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
        printf("\n%d", i);
    }

    printf("\nsum: %d", sum);
    return 0;
}