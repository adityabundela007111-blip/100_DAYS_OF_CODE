// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include<stdio.h>
int main(){
  int l , b, area , perimeter;
  printf("Enter length of the rectangle : ");
  scanf("%d",&l);
  printf("Enter breadth of the rectangle : ");
  scanf("%d",&b);
  area = l*b;
  perimeter = 2*(l+b);
  printf("The area and perimeter of the rectangle is %d and %d",area,perimeter);
  return 0;
}
