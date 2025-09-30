/*
2. Write a program that formats product information entered by the user. A session with the
program should look like this:
Enter item number: 583                                  (input)
Enter unit price: 13.5                                  (input)
Enter purchase date (mm/dd/yyyy): 10/24/2010            (input)
Item        Unit        Purchase
            Price       Date
583         $13.50     10/24/2010
*/

#include <stdio.h>

int main(void)
{
    int item_number, month, day, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d / %d / %d", &month, &day, &year);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
    printf("%d\t$%.2f\t%02d/%02d/%04d\n", item_number, unit_price, month, day, year);

    return 0;
}