#include <stdio.h>
#include <limits.h>
int MaxSubarrSum(int arr[], int n, int k, int findmax)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    int result = sum;

    for (int i = k; i < n; i++)
    {
        sum += arr[i] - arr[i - k];

        if (findmax)
        {
            if (sum > result)
            {
                result = sum;
            }
        }
        else
        {
            if (sum < result)
            {
                result = sum;
            }
        }
    }
    return result;
}

//     int max_sum = INT_MIN, current_sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         current_sum += arr[i];
//         if (current_sum > max_sum)
//             max_sum = current_sum;
//         if (current_sum < 0)
//             current_sum = 0;
//     }
//     return max_sum;
// }
int main()
{

    int arr[] = {2, 1, 5, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int max_sum = MaxSubarrSum(arr, n, k, 1);
    printf("Maximum Subarray sum: %d\n", k, max_sum);

    int min_sum = MaxSubarrSum(arr, n, k, 0);
    printf("Minimum Subarray sum: %d\n", k, min_sum);

    return 0;
}