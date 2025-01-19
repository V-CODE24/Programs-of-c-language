#include <stdio.h>

int ispalindrome(int num)
{
    int reversed = 0;
    int originalNumber = num;

    // Lets reverse a number
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    printf("The  reversed numer is %d\n", reversed);
    if (originalNumber == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int number;
    printf("Enter the number to check is it palindrone or not\n");
    scanf("%d", &number);
    if (ispalindrome(number))
    {
        printf("The number is palindrone\n");
    }
    else
    {
        printf("The number is not palindrone\n");
    }
    return 0;
}