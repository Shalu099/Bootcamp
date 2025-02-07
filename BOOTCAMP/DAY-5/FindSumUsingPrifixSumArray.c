#include <stdio.h>

void computeprefixsum(int arr[], int n, int prefixsum[])
{
    prefixsum[0] = arr[0];
    for (int i = 0; i < n; i++)
        prefixsum[i] = prefixsum[i - 1] + arr[i];
}
int getsubarraysum(int prefixsum[], int l, int r)
{
    if (l == 0)
        return prefixsum[r];
    return prefixsum[r] - prefixsum[l - 1];
}
int main()
{
    int arr[] = {2, 3, 4, 9, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int prefixsum[n];
    int l=1, r=4;
    computeprefixsum(arr, n, prefixsum);
    printf("sum of subarray from index %d to %d :%d\n", l, r, getsubarraysum(prefixsum, l, r));
    return 0;
}