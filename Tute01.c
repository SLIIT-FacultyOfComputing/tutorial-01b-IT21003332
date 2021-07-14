/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()
{
  float mark1,mark2;
  printf("Please enter the marks for subject 1: ");
  scanf("%f",&mark1);
  printf("Please enter the marks for subject 2: ");
  scanf("%f",&mark2);

  printf("Average: %.2f",(mark1+mark2)/2.0);

  return 0;
}

