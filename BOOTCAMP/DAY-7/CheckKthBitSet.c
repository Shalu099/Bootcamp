#include <stdio.h>
void checkKthBits(int n, int k)
{
    if (n % (1 << k))
    {
        printf("%dth bit is set(1).\n", k);
    }
    else
    {
        printf("%dth is not set(0)\n", k);
    }
}
int main()
{
    int n = 4, k = 1;
    checkKthBits(n, k);
    return 0;
}




// int main()
// {
//     int n=5;
//     if ((n & 1) != 0)

//         printf("yes! set bit");
//     else
//         printf("not a set bit");

//     return 0;
// }