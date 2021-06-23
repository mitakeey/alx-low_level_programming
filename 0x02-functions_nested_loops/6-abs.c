#include "holberton.h"
/**
 * _abs - computes absolute value of an int.
 * @n: - integer input argument
 * Return: returns the absolute value of @n
 */
int _abs(int n)
{
if (n < 0)
{
return (n * -1);
}
else
{
return (n);
}
}
