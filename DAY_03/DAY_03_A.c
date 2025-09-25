//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include<stdio.h>
int main(){
  int temp_C,temp_F;
  printf("Enter temperature in Celsius : ");
  scanf("%d",&temp_C);

  temp_F = (temp_C*9)/5 + 32;
  printf("Fahrenheit = %d\n",temp_F);
  return 0;
}  
