#include <stdio.h>
int main()
{
    char c = 'b';
    
    switch (c)
    {
    case 'a':
    case 'i':
    case 'e':
    case 'u':
    case 'o':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':

        printf("%c is vowel.\n", c);
        break;
    default:
        printf("%c is consonant.\n", c);
    }
    return 0;
}