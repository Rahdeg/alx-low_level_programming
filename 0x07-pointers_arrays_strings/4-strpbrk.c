#include <main.h>

/**
 * _strpbrk - finds string
 * @s: the chaine
 * @accept: the chaine
 *
 * Return: returns new value
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != 0)
	{
		for (i = 0; *(accept + i) != 0; i++)
		{
			if (*s == *(accept + i))
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
