Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/ 
#include<stdio.h>
int main(){
  float side_1,side_2,side_3;
  printf("Enter three sides of the triangle : ");
  scanf("%f %f %f",&side_1,&side_2,&side_3);

  if (side_1 + side_2 > side_3 && side_2 + side_3 > side_1 && side_1 + side_3 > side_2){
    if(side_1 == side_2 && side_2 == side_3){
    printf("Equilateral");
  }
  else if (side_1 == side_2 || side_2 == side_3 || side_1 == side_3){
    printf("Isosceles");
  }
  else {
    printf("Scalene");
  }
  }
  return 0;
}
