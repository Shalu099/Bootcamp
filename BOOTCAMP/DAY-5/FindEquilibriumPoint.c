#include <stdio.h>

int findequilibriumIndex(int a[], int n)
{
    int sum = 0, leftsum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum -= a[i];
        if (leftsum == sum)
        {
            return i;
        }
        leftsum += a[i];
    }
    return -1;
}
int main()
{
    int a[] = {1, 3, 5, 2, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int equilibriumIndex = findequilibriumIndex(a, n);
    if (equilibriumIndex != -1)
        printf("Equilibrium point found at index %d\n", equilibriumIndex);
    else
        printf("no equilibrium index found.\n");
    return 0;
}