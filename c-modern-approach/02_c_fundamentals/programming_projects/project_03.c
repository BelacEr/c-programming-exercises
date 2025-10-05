/*
* Modify the program of Programming Project 2 so that it prompts the user to enter the radius
* of the sphere.
*/

#include <stdio.h>

#define FRACTION_4_3 (4.0f / 3.0f)
#define PI 3.14159265359f

int main(void)
{
  float r, volume;

  printf("Enter the radius of the sphere: ");
  scanf("%f", &r);

  volume = FRACTION_4_3 * PI * r * r * r;   // volume of a sphere = 4/3πr3
  
  printf("The volume of a sphere with a %.2f-meter radious is %.2f\n", r, volume);

  return 0;
}
