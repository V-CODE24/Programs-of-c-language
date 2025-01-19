#include <stdio.h>

// Function declaration
int gcd(int, int);

// Recursive function to calculate GCD
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(a % b, b);  // Recursive call
}

int main() {
    int num1, num2;

    // Take input from the user
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Check if both numbers are non-negative (optional)
    if (num1 < 0 || num2 < 0) {
        printf("Please enter non-negative integers.\n");
        return 1; // Exit if invalid input is provided
    }

    // Call the gcd function and print the result
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd(num1, num2));

    return 0;
}
