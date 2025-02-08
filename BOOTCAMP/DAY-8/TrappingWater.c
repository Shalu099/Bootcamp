#include <stdio.h>

// Function to return the maximum water that can be stored
int maxWater(int arr[], int n) {
    int res = 0;

    // For every element of the array
    for (int i = 1; i < n - 1; i++) {

        // Find the maximum element on its left
        int left = arr[i];
        for (int j = 0; j < i; j++)
            if (arr[j] > left)
                left = arr[j];

        // Find the maximum element on its right
        int right = arr[i];
        for (int j = i + 1; j < n; j++)
            if (arr[j] > right)
                right = arr[j];

        // Update the maximum water
        res += (left < right ? left : right) - arr[i];
    }

    return res;
}

// Driver code
int main() {
    int arr[] = { 2, 1, 5, 3, 1, 0, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d", maxWater(arr, n));
    return 0;
}
