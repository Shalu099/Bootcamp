#include <stdio.h>

void findcommonelements(int a[], int n1, int b[], int n2, int c[], int n3)
{
    int i = 0, j = 0, k = 0;
    printf("common elements: ");

    while (i < n1 && j < n2 && k < n3)
    {
        if (a[i] == b[j] && b[j] == c[k])
        {
            printf("%d\n", a[i]);
            i++;
            j++;
            k++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < c[k])
        {
            j++;
        }
        else
        
            k++;
        
    }
    printf("\n");
}
int main()
{
    int a[] = {1, 5, 2, 5, 6, 7, 8};
    int b[] = {1, 4, 3, 2};
    int c[] = {0, 0, 9, 8};

    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);
    int n3 = sizeof(c) / sizeof(c[0]);

    findcommonelements(a, n1, b, n2, c, n3);

    return 0;
}