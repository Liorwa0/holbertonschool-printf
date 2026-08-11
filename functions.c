#include "main.h"
/**
 * print_char - Prints a single character
 * @c: Character to print
 *
 * Return: Number of characters printed
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - Prints a string
 * @str: String to print
 *
 * Return: Number of characters printed
 */
int print_string(char *str)
{
	int i;

	if (str == NULL)
		str = "(null)";

	i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}

	return (i);
}

/**
 * print_number - Prints an integer
 * @n: Integer to print
 *
 * Return: Number of characters printed
 */
int print_number(int n)
{
	unsigned int num;
	int count;

	count = 0;

	if (n < 0)
	{
		count += print_char('-');
		num = -(unsigned int)n;
	}
	else
	{
		num = (unsigned int)n;
	}

	if (num / 10)
		count += print_number(num / 10);

	count += print_char((num % 10) + '0');

	return (count);
}
