#include <stdio.h>
int main()
{
    int a = 10, b = 20, c = 30;
    int max=(a>b)?(a>c)?a:c:(b>c?b:c);
    printf("The largest no of %d %d %d is : %d", a, b, c, max);
    return 0;
}