#include <stdio.h>

void findSubarrayWithSum(int arr[], int n, int target)
{
    int start = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        while (sum > target && start <= i)
        {
            sum -= arr[start];
            start++;
        }
        if (sum == target)
        {
            printf("Subarray with sum %d found from index %d to %d\n", target, start, i);
            return;
        }
    }
    printf("No subarray with the given sum found\n");
}
int main()
{
    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 33;

    findSubarrayWithSum(arr, n, target);
    return 0;
}
