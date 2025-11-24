Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include<stdio.h>
int main() {
  int n, i, perfect = 0;
  printf("Enter a number to check: \n");
  scanf("%d", &n);

  for(i=1; i<=n/2; i++){
    if(n%i == 0){
      perfect += i;
    }
  }
  if(perfect == n && n != 0){
    printf("Perfect Number\n");
  } else{
    printf("Not Perfect Number\n");
  }
  return 0;
}
