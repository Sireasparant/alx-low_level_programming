#include "main.h"

/**
 * _pow_recursion - function to returns the value of x
 * @x: value to be raised
 * @y: value to be raised
 *
 * Return: the value of x pow y
 */
int _pow_recursion(int x, int y)
{
	int ans;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * int _pow_recursion(x, y - 1));
			}
