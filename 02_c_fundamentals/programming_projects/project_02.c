/*
2. Write a program that computes the volume of a sphere with a 10-meter radius, using the for-
mula v = 4/3πr3 . Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What hap-
pens?) Hint: C doesn’t have an exponentiation operator, so you’ll need to multiply r by itself
twice to compute r
*/

#include <stdio.h>

#define FRACTION_4_3 (4.0f / 3.0f)
#define PI 3.14159265359f
#define FRACTION_4_3_wrong (4 / 3)  // *WRONG*

int main(void)
{
  int r = 10;
  float volume, volume_wrong;

  volume = FRACTION_4_3 * PI * r * r * r;               // volume of a sphere = 4/3πr3
  volume_wrong = FRACTION_4_3_wrong * PI * r * r * r;   // volume of a sphere using (4/3) instead of (4.0f/3.0f)

  printf("The volume of a sphere with a 10-meter radius is %.2f\n", volume);
  printf("The volume of a sphere with a 10-meter radious using an incorrect fraction is %.2f\n", volume_wrong);

  return 0;
}
