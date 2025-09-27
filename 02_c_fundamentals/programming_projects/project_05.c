/*
* 5. Write a program that asks the user to enter a value for x and then displays the value of the
* following polynomial:
* 3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6
*
* When compiling:
* gcc project_05.c -o project_05 -lm
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
  float x, result;

  printf("Enter the value of 'x': ");
  scanf("%f", &x);

  result = 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;

  printf("Polynomial: 3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6\n");
  printf("For x = %.2f, result = %.2f\n", x, result);

  return 0;
}
