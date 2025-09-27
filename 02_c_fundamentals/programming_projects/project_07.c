/*
* 7. Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay
* that amount using the smallest number of $20, $10, $5, and $1 bills:
* Enter a dollar amount: 93
* $20 bills: 4
* $10 bills: 1
* $5 bills: 0
* $1 bills: 3
* Hint: Divide the amount by 20 to determine the number of $20 bills needed, and then reduce
* the amount by the total value of the $20 bills. Repeat for the other bill sizes. Be sure to use
* integer values throughout, not floating-point numbers.
*/
#include <stdio.h>

int main(void)
{
  int amount, remainder, bills_20, bills_10, bills_5, bills_1;

  printf("Enter a dollar amount: ");
  scanf("%d", &amount);

  bills_20 = amount / 20;                             // 93 / 20 = 4
  remainder = amount - (bills_20 * 20);               // 93 - (4 * 20) = 13
  bills_10 = remainder / 10;                          // 13 / 10 =  1
  remainder -= (bills_10 * 10);                       // 13 - (1 * 10) = 3
  bills_5 = remainder / 5;                            // 3 / 5 = 0
  remainder -= (bills_5 * 5);                         // 3 - (0 * 5) = 3
  bills_1 = remainder / 1;                            // 3 / 1 = 3

  printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", bills_20, bills_10, bills_5, bills_1);

  return 0;
}
