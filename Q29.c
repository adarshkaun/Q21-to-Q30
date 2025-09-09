// Write a program to calculate the factorial of a number.

#include <stdio.h>

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n < 0) return 0; // Factorial not defined for negative numbers
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %llu\n", num, factorial(num));
    }
    return 0;
}