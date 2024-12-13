#include<stdio.h>

int main() {
    int n, sum = 0;
    
    // Asking user to enter the number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop to calculate the sum of natural numbers
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display the result
    printf("Sum of all natural numbers up to %d is: %d\n", n, sum);

    return 0;
}
