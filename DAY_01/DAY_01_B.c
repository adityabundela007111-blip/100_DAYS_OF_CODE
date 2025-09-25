Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include<stdio.h>
int main(){
  int a,b,sum,diff,product;
  printf("Enter number a : \nEnter number b : ");
  scanf("%d %d",&a,&b);
  sum = a+b;
  diff = a-b;
  product = a*b;
  printf("Sum = %d \nDiff = %d\nProduct = %d",sum,diff,product);
  if (b!=0){
    int quotient = a/b;
    printf("Quotient = %d",quotient);
  }
  else{
    printf("You are dividing by 0,it is undefined.");
  }
  return 0;
}
