#include <stdio.h>

int main()
{
    int i;
    int sum = 0;
    int n;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum = sum + i;
    printf("The sum of the numbers is : %d", sum);
    return 0;
}