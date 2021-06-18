#include <stdio.h>
/**
* main - program entry point
* Return: returns nothing
*/
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if ((c != 'e') && (c != 'q'))
{
putchar(c);
}
c++;
}
putchar('\n');
return (0);
}
