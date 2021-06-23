#include "holberton.h"
/**
 * print_last_digit - gets an integer and prints the last number.
 * @i: integer input argument.
 * Return: returns last digit of input
 */
int print_last_digit(int i)
{
int lastDigit;
if (i < 0)
{
lastDigit = (i % 10) * -1;
}
else
{
lastDigit = i % 10;
}
_putchar(lastDigit + '0');
return (lastDigit);
}
