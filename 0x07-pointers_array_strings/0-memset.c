#include "main.h"

/**
 * _memset - fills a memory block with a constant file
 * @s: address to the memory
 * @b: character to be used
 * @n: number of bytes to be used
 *
 * Return: pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
