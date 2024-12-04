#include <stdio.h>

int main()
{

    int num1;
    int num2;
    int num3;
    int num4;
    int sum;
    printf("Enter the first number");
    scanf("%d", &num1);

    printf("Enter the second number");
    scanf("%d", &num2);

    printf("Enter the third number");
    scanf("%d", &num3);

    printf("Enter the four number");
    scanf("%d", &num4);

    sum = num1 + num2 + num3 + num4;
    printf("The sum of the four numbers is: %d+%d+%d+%d=%d", num1, num2, num3, num4, sum);

    return 0;
}