/*
* 4. Write a program that asks the user to enter a dollars-and-cents amount, then displays the
* amount with 5% tax added:
* Enter an amount: 100.00 (input)
* With tax added: $105.00 (output)
*/

#include <stdio.h>

#define TAX 0.05  // 5%

int main(void)
{
  float amount, amount_tax_added;   // Declaring float variable.

  printf("Enter an amount: ");
  scanf("%f", &amount);

  amount_tax_added = (amount * TAX) + amount;

  printf("With tax added: $%.2f\n", amount_tax_added);

  return 0;
}
