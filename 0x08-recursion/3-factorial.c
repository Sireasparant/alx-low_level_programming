#include "main.h"

/**
 * factorial - calculates the n factorial
 * @n: number to be used
 *
 * Return: the n factorial
 */
int factorial(int n)
{
	int next_factorial;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	next_factorial = factorial(n - 1);
	return (n * next_factorial);
}
