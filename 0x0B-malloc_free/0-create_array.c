#include "holberton.h"
#include <stdlib.h>
/**
 *create_array - Create an array of chars
 *@size: size of string
 *@c: new string
 *Return: NULL if is 0
 */

char *create_array(unsigned int size, char c)
{
unsigned int con;
char *parray;
if (size == 0)
return (NULL);
else
parray = malloc(size * sizeof(c));
for (con = 0; con < size; con++)
*(parray + con) = c;
return (parray);
free(parray);
}
