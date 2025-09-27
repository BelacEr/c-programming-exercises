/* 
* 6. Modify the program of Programming Project 5 so that the polynomial is evaluated using the
* following formula:
* ((((3x + 2)x – 5)x – 1)x + 7)x – 6
*/

#include <stdio.h>

int main(void)
{
  float x, result;

  printf("Algebraic expression: ((((3x + 2)x - 5)x - 1)x + 7)x - 6\n");
  printf("Enter the value of 'x': ");
  scanf("%f", &x);

  result = ((((3 * x + 2)* x - 5)* x - 1)* x + 7)* x - 6;
 
  printf("For x = %.2f, result = %.2f\n", x, result);

  return 0;
}
