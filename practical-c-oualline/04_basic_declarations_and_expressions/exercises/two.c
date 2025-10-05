/* Question 4-3: Why does 2 + 2 = 5928 (Your results may vary) */

#include <stdio.h>

int main(void)
{
    int answer;

    answer = 2 + 2;

    /* Incorrect printf statement: missing expression */
    printf("The answer is %d\n");
    
    /* Correct printf statement: expresion added */
    printf("The answer is %d\n", answer);

    return (0);
}