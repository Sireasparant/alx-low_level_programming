#include "main.h"

/**
 * _factorial - calculates the n factorial
 * @n: number to be used
 *
 * Return: the n factorial
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
		fact = fact * n;
		n++;
	}
	return (fact);
}
