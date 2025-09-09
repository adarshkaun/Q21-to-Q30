// Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1, count = 0; count < n; i += 2, count++) {
        sum += i;
    }

    printf("Sum of first %d odd numbers is %d\n", n, sum);
    return 0;
}