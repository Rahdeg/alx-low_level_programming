#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */

int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}

/**
 * _memset - fills memory with a constant byte.
 * @s: the memory area to be filled
 * @b: the constant byte
 * @n: number of bytes to fill with char b
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	for (; n; n--)
		*p++ = b;

	return (s);
}

/**
 * multiply - multiplies two numbers (in string), and prints the result.
 * @n1: first number
 * @n2: second number
 * Return: void
 */

void multiply(char *n1, char *n2)
{
	int idx, n1n, n2n, res, tmp, total;
	int n1l = _strlen(n1);
	int n2l = _strlen(n2);

	int *ptr;

	tmp = n2l;
	total = n1l + n2l;
	ptr = _calloc(total, sizeof(int));
	for (n1l--; n1l >= 0; n1l--)
	{
		n1n = n1[n1l] - '0';
		res = 0;
		n2l = tmp;
		for (n2l--; n2l >= 0; n2l--)
		{
			n2n = n2[n2l] - '0';
			res += ptr[n1l + n2l + 1] + (n1n * n2n);
			ptr[n1l + n2l + 1] = res % 10;
			res /= 10;
		}
		if (res)
		{
			ptr[n1l + n2l + 1] = res % 10;
		}
	}
	res = 0;
	for (idx = 0; idx < total; idx++)
	{
		if (ptr[idx] == 0 && res == 1)
			_putchar(ptr[idx] + '0');
		else if (ptr[idx] > 0)
		{
			_putchar(ptr[idx] + '0');
			res = 1;
		}
	}
	_putchar('\n');
	free(ptr);
}
