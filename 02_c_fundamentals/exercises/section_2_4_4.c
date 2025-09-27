/*
* Write a program that declares several int and float variables—without initializing
* them—and then prints their values. Is there any pattern to the values? (Usually there isn’t.)
*/
#include <stdio.h>

int main(void)
{
  int x, y, z;    // Declares 'x', 'y' and 'z' without initializing them.
  float a, b, c;   // Declares 'a', 'b' and 'c' without initializing them.
  
  printf("Integers. x: %d, y: %d, z: %d\n", x, y, z);
  printf("Floats. a: %f, b: %f, c: %f\n", a, b, c );

  return 0;
}
