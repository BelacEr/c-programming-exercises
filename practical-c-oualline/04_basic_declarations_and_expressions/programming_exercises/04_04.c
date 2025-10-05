/*
Exercise 4-4: Write a program to print "HELLO" in big block letters; each letter
should have a height of seven characters and width of five characters.
*/

#include <stdio.h>

int main(void)
{
    printf("H   H  EEEEE  L      L       OOO  \n");
    printf("H   H  E      L      L      O   O \n");
    printf("H   H  E      L      L      O   O \n");
    printf("HHHHH  EEEEE  L      L      O   O \n");     // middle
    printf("H   H  E      L      L      O   O \n");
    printf("H   H  E      L      L      O   O \n");
    printf("H   H  EEEEE  LLLLL  LLLLL   OOO  \n");

    return (0);
}