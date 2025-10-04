Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, i;
    int is_prime = 1;

    printf("Enter your number to check: \n");
    scanf("%d", &num);

    if (num <= 1) {
        is_prime = 0;
    } else {
        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime == 1) {
        printf("Prime");
    } else {
        printf("Not prime");
    }

    return 0;
}
