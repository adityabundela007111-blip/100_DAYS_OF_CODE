Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main() {
    int n, remainder,place = 1;
    long long binary = 0;

    printf("Enter the number to convert it to binary: \n");
    scanf("%d", &n);
    
    int original_n = n;

    if (n == 0) {
        printf("The binary representation of 0 is: 0\n");
        return 0;
    }

    while (n > 0) {
        remainder = n % 2;
        n = n / 2;
        binary = binary + (long long)remainder * place;
        place = place * 10;
    }

    printf("The binary representation of %d is: %lld\n", original_n, binary);

    return 0;
}
