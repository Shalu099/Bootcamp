#include <stdio.h>

int findcountset(int num)
{
    int count = 0;
    while (num)
    {
        num &= (num - 1);
        count++;
    }
    return count;
    
}
int main()
{
    int num = 16;
    printf("The count set bits are:%d\n", findcountset(num));
    return 0;
}