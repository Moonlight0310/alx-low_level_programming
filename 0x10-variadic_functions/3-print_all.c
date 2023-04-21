#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints a character
 * @list: va_list containing the character to print
 * @sep: separator string to print before the character
 */
void print_char(va_list list, char *sep)
{
	printf("%s%c", sep, va_arg(list, int));
}

/**
 * print_int - prints an integer
 * @list: va_list containing the integer to print
 * @sep: separator string to print before the integer
 */
void print_int(va_list list, char *sep)
{
	printf("%s%d", sep, va_arg(list, int));
}

/**
 * print_float - prints a floating-point number
 * @list: va_list containing the floating-point number to print
 * @sep: separator string to print before the floating-point number
 */
void print_float(va_list list, char *sep)
{
	printf("%s%f", sep, va_arg(list, double));
}

/**
 * print_string - prints a string
 * @list: va_list containing the string to print
 * @sep: separator string to print before the string
 */
void print_string(va_list list, char *sep)
{
	char *str = va_arg(list, char *);

	if (!str)
		str = "(nil)";

	printf("%s%s", sep, str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	char *sep = "";

	va_start(list, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				print_char(list, sep);
				break;
			case 'i':
				print_int(list, sep);
				break;
			case 'f':
				print_float(list, sep);
				break;
			case 's':
				print_string(list, sep);
				break;
			default:
				i++;
				continue;
		}

		sep = ", ";
		i++;
	}

	printf("\n");
	va_end(list);
}

/**
 * main - test function for print_all
 *
 * Return: always 0
 */
int main(void)
{
	print_all("cis", 'H', 0, "lberton");
	print_all("sifc", "hello", -123, 3.1415, 'F');
	return (0);
}
