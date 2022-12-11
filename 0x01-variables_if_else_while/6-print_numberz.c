#include <stdio.h>

/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)

{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

