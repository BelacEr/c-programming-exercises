/* Question 4-4: Why is an incorrect result printed? */

#include <stdio.h>

int main(void)
{
    float result;   /* Resulf of the divide */

    result = 7.0 / 22.0;

    /* Incorrect conversion specification: using an integer conversion for a floating-point expression */
    printf("The result is %d\n", result);

    /* The correct conversion specification is a floating-point conversion */
    printf("The result is %f\n", result);

    return (0);
}