/* Question 4- 2: Why is the resulf "O"? What must be done to this program to fix it? */

#include <stdio.h>

float answer;   /* The resulf of our calculation */

int main()
{
    /* Incorrect integer division */
    answer = 1/3;
    printf("The value of 1/3 is %f\n", answer);

    /* Correct floating-poing division */
    answer = 1.0 / 3.0;
    printf("The value of 1/3 is %f\n", answer);

    return (0);
}