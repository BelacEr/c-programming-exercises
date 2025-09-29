/*
* 8. Write a program that calculates the remaining balance on a loan after the first, second, and
* third monthly payments:
* Enter amount of loan: 20000.00                        (input)
* Enter interest rate: 6.0                              (input)
* Enter monthly payment: 386.66                         (input)
* Balance remaining after first payment: $19713.34      (output)
* Balance remaining after second payment: $19425.25     (output)
* Balance remaining after third payment: $19135.71      (output)
* Display each balance with two digits after the decimal point. Hint: Each month, the balance
* is decreased by the amount of the payment, but increased by the balance times the monthly
* interest rate. To find the monthly interest rate, convert the interest rate entered by the user to
* a percentage and divide it by 12.
*/

#include <stdio.h>

int main(void)
{
    float loan, int_rate, monthly_payment, monthly_int;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &int_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    // Convert annual % rate to monthly fraction
    monthly_int = (int_rate / 100.0f) / 12.0f;

    // First payment
    loan = loan - (monthly_payment - loan * monthly_int);
    printf("\nBalance remaining after first payment: $%.2f\n", loan);

    // Second payment
    loan = loan - (monthly_payment - loan * monthly_int);
    printf("Balance remaining after second payment: $%.2f\n", loan);

    // Third payment
    loan = loan - (monthly_payment - loan * monthly_int);
    printf("Balance remaining after third payment: $%.2f\n", loan);

    return 0;
}

