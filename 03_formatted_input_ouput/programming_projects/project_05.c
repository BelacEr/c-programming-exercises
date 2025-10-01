/*
5. Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then
displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns,
and diagonals:
Enter the numbers from 1 to 16 in any order:
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

16 3 2 13
5 10 11 8
9 6 7 12
4 15 14 1
Row sums: 34 34 34 34
Column sums: 34 34 34 34
Diagonal sums: 34 34
*/

#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4, num5, num6, num7, num8;
    int num9, num10, num11, num12, num13, num14, num15, num16;
    int row_1, row_2, row_3, row_4;
    int colum_1, colum_2, colum_3, colum_4;
    int diagonal_1, diagonal_2;

    printf("Enter the numbers from 1 to 16 in any orders: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
        &num1, &num2, &num3, &num4,
        &num5, &num6, &num7, &num8,
        &num9, &num10, &num11, &num12,
        &num13, &num14, &num15, &num16);


    printf("\n%d %d %d %d\n", num1, num2, num3, num4);
    printf("%d %d %d %d\n", num5, num6, num7, num8);
    printf("%d %d %d %d\n", num9, num10, num11, num12);
    printf("%d %d %d %d\n", num13, num14, num15, num16);

    colum_1 = num1 + num2 + num3 + num4;
    colum_2 = num5 + num6 + num7 + num8;
    colum_3 = num9 + num10 + num11 + num12;
    colum_4 = num13 + num14 + num15 + num16;


    row_1 = num1 + num5 + num9 + num13;
    row_2 = num2 + num6 + num10 + num14;
    row_3 = num3 + num7 + num11 + num15;
    row_4 = num4 + num8 + num12 + num16;
    
    diagonal_1 = num1 + num6 + num11 + num16;
    diagonal_2 = num4 + num7 + num10 + num13;

    printf("\nRow sums: %d %d %d %d\n", row_1, row_2, row_3, row_4);
    printf("Colum sums: %d %d %d %d\n", colum_1, colum_2, colum_3, colum_4);
    printf("Diagonal sums: %d %d\n", diagonal_1, diagonal_2);


    return 0;
}