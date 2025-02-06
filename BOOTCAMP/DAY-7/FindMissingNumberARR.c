#include <stdio.h>

int findMissing(int arr[], int n)
{
    int sum = n * (n + 1) / 2;
    int actual_sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        actual_sum += arr[i];
    }
    return sum - actual_sum;
}
int main()
{
    int n=6;
    int arr[] = {1, 2, 4, 5, 6};
    //int n = sizeof(arr) / sizeof(arr[0]);
    findMissing(arr, n);
    printf("The missing number is:%d\n", findMissing);
    return 0;
}



#include <stdio.h>

int findMissing(int arr[], int n)
{
    int sum = n * (n + 1) / 2;
    int actual_sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        actual_sum += arr[i];
    }
    return sum - actual_sum;
}

int main()
{
    int n = 6;
    int arr[] = {1, 2, 4, 5, 6};
    int missingNumber = findMissing(arr, n);
    printf("The missing number is: %d\n", missingNumber);
    return 0;
}
