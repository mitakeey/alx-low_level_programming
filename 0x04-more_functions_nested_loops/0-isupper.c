#include "holberton.h"
/**
 * _isupper(int c)- function that checks for uppercase character
 *@c: ascii value of char
 * Return: 1 when lowercase , 0 when not.
 */
int _isupper(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
else
{
return (0);
}
}