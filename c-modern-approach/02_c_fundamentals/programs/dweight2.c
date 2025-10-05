/* Computes the dimensinal weight of a
   box from input provided by the user. */

#include <stdio.h>
#define INCHES_PER_ROUND 166

int main(void)
{
  int height, length, width, volume, weight;

  printf("Enter the height of box: ");
  scanf("%d", &height);
  printf("Enter the length of box: ");
  scanf("%d", &length);
  printf("Enter the width of box: ");
  scanf("%d", &width);
  volume = height * length * width;
  weight = (volume + INCHES_PER_ROUND - 1) / INCHES_PER_ROUND;

  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensinal weight (pounds): %d\n", weight);

  return 0;
}
