#include "main.h"

/**
 * _is_prime_number - returns 1 if number is prime
 * @n: number to be checked
 *
 * Return: 1 if number is prime
 */
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (_is_prime(n, start));
}
/**
 * _is_prime_number - returns 1 if number is prime
 * @start: number to be checked
 * @n: number to be checked
 *
 * Return: 1 if number is prime
 */
int _is_prime(int start,int n)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return(_is_prime(n, start - 1);
}
