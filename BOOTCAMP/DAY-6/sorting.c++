#include <iostream>
using namespace std;

int main()
{
    int n=5;
    int arr[10] = {0, 1, 2, 0, 1};
   // int n = sizeof(arr) / sizeof (arr[0]);
    int low = arr[0];
    int mid = arr[0];
    int high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else{ swap(arr[high], arr[mid]);
        high--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}