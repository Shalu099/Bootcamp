#include <stdio.h>
#include <limits.h>

void findMaxMinSum(int arr[], int n, int k)
{
    if (k > n)
    {
        printf("Invalid input: K should be less than or equal to array size.\n");
        return;
    }
    int maxsum = INT_MIN, minsum = INT_MAX;
    int currentsum = 0;
    for (int i = 0; i < k; i++)
        currentsum += arr[i];
    maxsum = minsum = currentsum;

    // sliding window technique

    for (int i = k; i < n; i++)
    {
        currentsum += arr[i] - arr[i - k]; // slides the window
        if (currentsum > maxsum)
            maxsum = currentsum;

        if (currentsum < minsum)
            minsum = currentsum;
    }
    printf("Maximum sum of subarray of size %d: %d\n", k, maxsum);
    printf("Minimum sum of subarray of size %d: %d\n", k, minsum);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    findMaxMinSum(arr, n, k);
    return 0;
}
