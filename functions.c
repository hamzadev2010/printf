#include "main.h"

/************************* PRINT CHAR *************************/

/**
 * print_char - Prints a char.
 * @types: List of arguments.
 * @buffer: Buffer array to handle print.
 * @flags: Calculates active flags.
 * @width: Width.
 * @precision: Precision specification.
 * @size: Size specifier.
 * Return: Number of chars printed.
 */
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}

/************************* PRINT A STRING *************************/
/**
 * print_string - Prints a string.
 * @types: List of arguments.
 * @buffer: Buffer array to handle print.
 * @flags: Calculates active flags.
 * @width: Get width.
 * @precision: Precision specification.
 * @size: Size specifier.
 * Return: Number of chars printed.
 */
int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	/* Implementation of the function print_string */
}

/************************* PRINT PERCENT SIGN *************************/
/**
 * print_percent - Prints a percent sign.
 * @types: List of arguments.
 * @buffer: Buffer array to handle print.
 * @flags: Calculates active flags.
 * @width: Get width.
 * @precision: Precision specification.
 * @size: Size specifier.
 * Return: Number of chars printed.
 */
int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	UNUSED(types);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	return (write(1, "%%", 1));
}

/************************* PRINT INT *************************/
/**
 * print_int - Print int.
 * @types: List of arguments.
 * @buffer: Buffer array to handle print.
 * @flags: Calculates active flags.
 * @width: Get width.
 * @precision: Precision specification.
 * @size: Size specifier.
 * Return: Number of chars printed.
 */
int print_int(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	/* Implementation of the function print_int */
}

/************************* PRINT BINARY *************************/
/**
 * print_binary - Prints an unsigned number.
 * @types: List of arguments.
 * @buffer: Buffer array to handle print.
 * @flags: Calculates active flags.
 * @width: Get width.
 * @precision: Precision specification.
 * @size: Size specifier.
 * Return: Number of chars printed.
 */
int print_binary(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	/* Implementation of the function print_binary */
}
