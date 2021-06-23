#include "holberton.h"
/**
* print_alphabet - entry point
* Description: Prints the alphabet with putchar
* Return: void
*/
void print_alphabet(void)
{
char b;
for (b = 'a'; b <= 'z'; b++)
{
_putchar(b);
}
_putchar('\n');
}
