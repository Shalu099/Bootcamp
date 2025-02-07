#include <stdio.h>
#include <limits.h>
int findMinDiff(int arr[], int n, int m)
{

    int minDiff = INT_MAX;

    for (int i = 0; i + m - 1 < n; i++)
    {

        int diff = arr[i + m - 1] - arr[i];

        if (diff < minDiff)
            minDiff = diff;
    }
    return minDiff;
}

int main()
{
    int arr[] = {2, 4, 9, 12, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 3;

    printf("%d\n", findMinDiff(arr, n, m));
    return 0;
}