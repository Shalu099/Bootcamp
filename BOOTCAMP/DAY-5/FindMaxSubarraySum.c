#include <stdio.h>
#include <limits.h>
int MaxSubarrSum(int arr[], int n)
{
    int max_sum = INT_MIN, current_sum = 0;
    for (int i = 0; i < n; i++)
    {
        current_sum += arr[i];
        if (current_sum > max_sum)
            max_sum = current_sum;
        else if (current_sum < 0)
            current_sum = 0;
            
    }
    return max_sum;
}
int main()
{

    int arr[] = {2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_sum = MaxSubarrSum(arr, n);
    printf("Maximum Subarray sum: %d\n", max_sum);
    return 0;
}