#include <stdio.h>
int main()
{
    int arr[10] = {0, 2, 0, 2, 0, 0, 1, 2, 0, 1};
    int n = sizeof(arr) / sizeof arr[0];
    int c0 = 0;
    int c1 = 0;
    int c2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            c0++;
        }
        else if (arr[i] == 1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    for (int i = 0; i < c0; i++)
    {
        printf("0 ");
    }
    for (int i = 0; i < c1; i++)
    {
        printf("1 ");
    }
    for (int i = 0; i < c2; i++)
    {
        printf("2 ");
    }
    return 0;
}
