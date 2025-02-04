#include <stdio.h>

int findmajorityelements(int arr[], int n)
{
    int candidate = -1, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = arr[i];
            count = 1;
        }
        else if (arr[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == candidate)
        {
            count++;
        }
    }
    if (count > n / 2)
        return candidate;

    return -1;
}
int main()
{
    int a[] = {2, 2, 1, 1, 2, 2, 2, 1, 1};
    int n = sizeof(a) / sizeof(a[0]);

    int result = findmajorityelements(a,n);

    if (result != -1)
        printf("Majority element: %d\n", result);
    else
        printf("no majority element found\n");

    return 0;
}