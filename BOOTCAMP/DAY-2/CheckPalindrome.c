#include <stdio.h>

void checkpalindrome(int n) 
{
    int num=n,rev=0;
    while (num != 0)
    {
        int dig = num % 10;
         rev = (rev * 10) + dig;
        num /= 10;
        
    }
     printf("The reverse of the number is %d", rev);
    if (n == rev)
    {
        printf("\nThe number is palindrome");
    }
    else
    {
        printf("\nThe number is not palindrome");
    }
}

int main()
{
    int n = 12;
    checkpalindrome(n);

    return 0;
}
