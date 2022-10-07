#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: the number to allocate memory for
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
unsigned int *p;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
