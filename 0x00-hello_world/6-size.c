#include <stdio.h>
/**
*main - to print text
*Return: 0
*/
int main(void)
{
int intType;
float floatType;
long longType;
long long int longlongType;
char charType;

printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of long int: %zu bytes\n," sizeof(longType)));
printf("Size of long long int: %zu bytes\n", sizeof(longlongType));
printf("Size of char: %zu byte\n", sizeof(charType));
return (0);
}
