#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum range
 * @max: maximum range
 *
 * Return: return null if min > max,else null if malloc fails
 */
int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * 1);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < 1; i++, min++)
	{
		a[i] = min
	}
	return (a);
}
