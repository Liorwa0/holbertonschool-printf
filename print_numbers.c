#include "main.h"

/**
 * print_number_helper - Recursively prints integer digits
 * @n: Unsigned representation of the integer
 *
 * Return: Number of digits printed
 */
static int print_number_helper(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += print_number_helper(n / 10);

	count += _putchar((n % 10) + '0');
	return (count);
}

/**
 * print_integer - Prints a signed integer (%d and %i)
 * @args: va_list containing the integer to print
 *
 * Return: Number of characters printed
 */
int print_integer(va_list args)
{
	int n = va_arg(args, int);
	unsigned int num;
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		num = (unsigned int)(-n);
	}
	else
	{
		num = (unsigned int)n;
	}

	count += print_number_helper(num);
	return (count);
}
