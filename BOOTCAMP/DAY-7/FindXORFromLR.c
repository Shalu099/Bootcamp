#include <stdio.h>
int xorfromLtoR(int n)
{
    if (n % 4 == 0)
        return n;
    else if (n % 4 == 1)
        return 1;
    else if (n % 4 == 2)
        return n + 1;
    else
        return 0;
}
int main()
{
    int n = 2;
    printf("XOR from 1 to %d is:%d\n", n, xorfromLtoR(n));
    return 0;
}