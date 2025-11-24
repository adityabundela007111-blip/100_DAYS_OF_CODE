Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include<stdio.h>
int main(){
  int num, rev=0, remainder;
  printf("Enter a number to be reserved : \n");
  scanf("%d", &num);

  while(num!=0){
    remainder = num%10;
    rev = rev*10 + remainder;
    num /= 10;
  }
  printf("%d",rev);
  return 0;
}
