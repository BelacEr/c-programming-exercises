/*
* 5. Write a program that asks the user to enter a value for x and then displays the value of the
* following polynomial:
* 3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6
*
* When compiling:
* gcc project_05.c -o project_05
*/

#include <stdio.h>

int main(void)
{
  float x, result;

  printf("Enter the value of 'x': ");
  scanf("%f", &x);

  result = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 *  x * x * x - x * x + 7 * x - 6; 

  printf("Polynomial: 3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6\n");
  printf("For x = %.2f, result = %.2f\n", x, result);

  return 0;
}
