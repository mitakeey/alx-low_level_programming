#include"holberton.h"
/**
* main - Entry point
*
* Description: prints Holberton
*
* Return: Always 0 (Success)
*/

int main(void)
{
char str[] = "Holberton";
int i = 0;

while (i < 9)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
return (0);
}
