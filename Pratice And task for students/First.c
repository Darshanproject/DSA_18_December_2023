#include <stdio.h>
#include <math.h>

int main() {
    int num, i;
    int isPrime = 1;  // Assume the number is prime initially

    // Prompt user to enter a positive integer
    do {
        printf("Enter a positive integer greater than 1: ");
        scanf("%d", &num);

        if (num <= 1) {
            printf("Invalid input. Please enter a number greater than 1.\n");
        }
    } while (num <= 1);

    // Check if the number is prime
    for (i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            isPrime = 0;  // Number is divisible, not prime
            break;
        }
    }

    // Display the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

