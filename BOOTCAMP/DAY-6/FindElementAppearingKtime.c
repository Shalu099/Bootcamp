// #include <stdio.h>

// void moreThanNBYK(int arr, int n, int k)
// {
//     int value = n / k;

//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < n; j++)
//             if (arr[i] == arr[j])
//                 count++;

//         if (count > value)
//         {
//             int alreadyPrinted = 0;
//             for (int j = 0; j < i; j++)
//                 if (arr[i] == arr[j])
//                     alreadyPrinted = 1;
//             if (!alreadyPrinted)
//                 printf("%d", arr[i]);
//         }
//     }
// }
// }
// int main()
// {
//     int arr[] = {3, 1, 2, 2, 1, 3, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = 3;
//     moreThanNBYK(arr, n, k);

//     return 0;
// }




#include <stdio.h>

void moreThanNBYK(int arr[], int n, int k) // Corrected parameter type
{
    int value = n / k;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
            if (arr[i] == arr[j])
                count++;

        if (count > value)
        {
            int alreadyPrinted = 0;
            for (int j = 0; j < i; j++)
                if (arr[i] == arr[j])
                    alreadyPrinted = 1;
            if (!alreadyPrinted)
                printf("%d ", arr[i]); // Added space for better output formatting
        }
    }
}

int main()
{
    int arr[] = {3, 1, 2, 2, 1, 3, 3,7,7,7,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    moreThanNBYK(arr, n, k);

    return 0;
}
