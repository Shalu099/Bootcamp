#include <stdio.h>
void pair(int arr[], int n, int targetsum)
{
    printf("Pairs with sum %d are:\n", targetsum);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == targetsum)
            {
            printf("(%d, %d)\n",arr[i],arr[j]);
            }
        }
    }
}
int main()
{
    int arr[] = {1, 4, 3, 10, 8, 1, 9, 0,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int targetsum = 9;
    pair(arr, n, targetsum);

    return 0;
}