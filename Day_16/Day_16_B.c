Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include<stdio.h>
int main(){
  int n, remainder, rev=0, original;

  printf("Enter a number to check : \n");
  scanf("%d",&n);
  
  original = n;
  
  if(n<0){
    printf("Not palindrome.\n");
    return 0;
  }
  
  while(n>0){
    remainder = n%10;
    rev = rev*10 + remainder;
    n = n/10;
  }
  
  if(rev == original){
    printf("Palindrome");
  }
  else{
    printf("Not palindrome");
  }
  return 0;
}
