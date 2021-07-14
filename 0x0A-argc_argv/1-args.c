#include <stdio.h>

/**
 * main - prints the name number of arguments passed to it
 * @argc: counts the arguments passed
 * @argv: an array of arguments passed to program
 * Return: an interger 0 for sucess.
 */
int main(int argc, char *argv[]__attribute((unused)))
{

printf("%d\n", argc - 1);
return (0);
}
