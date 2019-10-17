#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory from an array using malloc
 * @nmemb: integer
 * @size: integer
 * Return: pointer to the allocated memory of NUll if failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int con;
int *array;

if (nmemb == 0 || size == 0)
return (NULL);
array = malloc(nmemb * size);
for (con = 0; con < size; con++)
array[con] = 0;
return (array);
}
