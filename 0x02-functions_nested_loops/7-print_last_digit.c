#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - prints the last digit of a number
 * Return: value of the last digit
 * @n: inputed value
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
