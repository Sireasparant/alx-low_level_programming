#include "main.h"

/**
 * _print_reverse_recursion - prints reverse recursion
 * @s: string to be printed
 *
 * Return: voi
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
