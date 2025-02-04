#include <stdio.h>
int main()
{
    char ch = 'I';
    int lower_case_Vowel, upper_case_Vowel;
    lower_case_Vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    upper_case_Vowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    if (lower_case_Vowel || upper_case_Vowel)
    {
        printf("%c is vowel", ch);
    }
    else
    {
        printf("%c is consonant", ch);
    }

    return 0;
}