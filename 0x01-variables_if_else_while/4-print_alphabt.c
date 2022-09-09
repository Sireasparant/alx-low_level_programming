#include <stddio.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program prints: "Programming is positive, zero, or negative"
 * Return: 0
 */
int main(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q')
			continue;
		else if (alphabet == 'e')
			continue;
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
