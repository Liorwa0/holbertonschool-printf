/*
-- Shatha's tasks
Main.h file
+ those functions 
c > single character  
s >  string of characters
% >  percent sign 
flow chart as addition 
-- Arwa's
d > prinnt decimal (base 10) number 
i > print integer in base 10
README file 
*/

#include <stdio.h>
#include "main.h"

/**
 * print_char - prints one character
 * @c: character to print
 *
 * Return: number of characters printed
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - prints a string
 * @str: string to print
 *
 * Return: number of characters printed
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
	char digit;

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

	if (num / 10 != 0)
		count += print_number(num / 10);

	digit = (num % 10) + '0';
	count += print_char(digit);

	return (count);
}
