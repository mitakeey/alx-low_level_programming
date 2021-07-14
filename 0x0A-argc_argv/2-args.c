#include <stdio.h>
/**
 * main - prints all the arguments
 * @argc: counts all arguments  into main
 * @argv: stores all arguments  into main
 *
 * Return: an interger 0 for success
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
