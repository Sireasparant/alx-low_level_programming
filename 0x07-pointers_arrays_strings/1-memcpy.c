#include "main.h"

/**
 * _memcpy - function that copies  memory area
 * @src: mem area to copy from
 * @dest: mem area to copy to
 * @n: number of bytes to be copied
 *
 * Return: pointer to yhe copied block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

