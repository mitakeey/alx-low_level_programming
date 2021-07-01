#include "holberton.h"
/**
* main - initializes concatenation
* @*dest - destination string to be appended
* @*scr -  source to be used in appending
* Return: Always 0.
*/

char *_strcat(char *dest, char *src)
char *dest;
char *scr;
int i,j;
for(i = 0; *dest!='\0'; i++)
{
for(j = 0; *scr!='\0'; j++, i++)
{
*dest[i] = *scr[j];
}
*dest[i] = '\0';
return (0);
}
