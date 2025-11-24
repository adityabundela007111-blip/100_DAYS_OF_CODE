
Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>

int main() {
    int n, first_digit, last_digit, digits, swapped_num;

    printf("Enter the number: \n");
    scanf("%d", &n);

    if (n < 10) {
        swapped_num = n;
    } else {
        last_digit = n % 10;
        digits = (int)log10(n);
        first_digit = n / pow(10, digits);
        int middle = n % (int)pow(10, digits);
        middle = middle / 10;
        swapped_num = (last_digit * pow(10, digits)) + (middle * 10) + first_digit;
    }

    printf("Number after swapping first and last digit: %d\n", swapped_num);

    return 0;
}
