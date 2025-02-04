#include <stdio.h>

void findunion(int arr1[], int n1, int arr2[], int n2)
{
    printf("union of the array :");
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            printf("%d", arr1[i]);
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            printf("%d", arr2[j]);
            j++;
        }
        else
        {
            printf("%d", arr1[i]);
            i++;
            j++;
        }
    }
    while (i < n1)
    {
        printf("%d", arr1[i]);
        i++;
    }
    while (j < n2)
    {
        printf("%d", arr2[j]);
        j++;
    }
    printf("\n");
}

int main()
{
    int arr1[] = {1, 2, 3};
    int arr2[] = {3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    findunion(arr1, n1, arr2, n2);

    return 0;
}