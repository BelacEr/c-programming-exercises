/* 
Exercise 4-3 : Write a program to compute the area and perimeter of a rectangle
with a width of three inches and a height of five inches. What changes must be made
to the program so that it works for a rectangle with a width of 6.8 inches and a
length of 2.3 inches?
*/
#include <stdio.h>


int main(void)
{
    int width, height, area, perimeter;

    width = 3;          // 3 inches
    height = 5;         // 5 inches

    area = (width * height);
    perimeter = (2 * width) + (2 * height);

    printf("Width: %d inches. Height: %d inches. Area: %d sq. in. Perimeter: %d inches\n", width, height, area, perimeter);

    float width_float, height_float, area_float, perimeter_float;

    width_float = 6.8;        // 6.8 inches
    height_float = 2.3;       // 2.3 inches

    area_float = (width_float * height_float);
    perimeter_float = (2 * width_float) + (2 * height_float);

    printf("Width: %.1f inches. Height: %.1f inches. Area: %.2f sq. in. Perimeter: %.2f inches\n", width_float, height_float, area_float, perimeter_float);

    return (0);
}