#include <stdio.h>

void checkcase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        printf("The character '%c' is an Uppercase Letter.\n", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("The character '%c' is an lowercase Letter.\n", ch);
    else if (ch >= '0' && ch <= '9')
        printf("The character '%c' is an digit.\n", ch);
    else
        printf("The character '%c' is an special character.\n", ch);
}
int main()
{
    char ch = '^';
    checkcase(ch);
    return 0;
}
