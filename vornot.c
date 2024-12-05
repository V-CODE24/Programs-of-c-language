#include <stdio.h>

int main()
{

    char ch;
    char a, e, i, o, u;
    printf("Enter the character to check: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
        printf("vowel");
        break;
    case 'e':
        printf("vowel");
        break;
    case 'i':
        printf("vowel");
        break;
    case 'o':
        printf("vowel");
        break;
    case 'u':
        printf("vowel");
        break;
    default:
        printf("Not a vowel");
    }
    return 0;
}