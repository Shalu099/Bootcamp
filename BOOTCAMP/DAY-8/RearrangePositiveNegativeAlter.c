#include <stdio.h>
int main()
{
    int arr1[] = {3, 1, -2, -5, 2, -4}; // 2149
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int ap[3];
    int an[3];
    int pi = 0;
    int ni = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] < 0)
        {
            an[ni++] = arr1[i];
        }
        else
            ap[pi++] = arr1[i];
    }
    int arr2[6];
    for (int i = 0; i < n; i++)
    {
        arr2[2 * i] = ap[i];
        arr2[2 * i + 1] = an[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr2[i]);
    }
    return 0;
}
