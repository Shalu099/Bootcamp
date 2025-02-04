#include <stdio.h>
int main()
{
    int n = -1;
    if (n == 0)
    {
        printf("the number is zero: %d", n);
    }
    else if (n > 0)
    {
        printf("the number is positive: %d", n);
    }
    else
    {
        printf("the number is negative: %d", n);
    }
    return 0;
}