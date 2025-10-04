Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>

int main() {
    int n, original_num, temp_num, remainder, power = 0;
    double rev = 0.0;

    printf("Enter your number to check: \n");
    scanf("%d", &n);

    original_num = n;
    temp_num = n;

    while (n != 0) {
        n /= 10;
        power++;
    }

    while (temp_num != 0) {
        remainder = temp_num % 10;
        rev = rev + pow(remainder, power);
        temp_num /= 10;
    }

    if ((int)rev == original_num) {
        printf("Armstrong");
    } else {
        printf("Not Armstrong");
    }

    return 0;
}
