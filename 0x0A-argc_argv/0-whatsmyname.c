#include <stdio.h>
/**
* main - prints the name of the program
* @argc : counts how many arguments are passed to the program which is unused
* for this program.
* @argv : stores the arguments passed to the program in an
* array of size argv[argc-1]
* Return: an interger 0 for sucess.
*/


int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
