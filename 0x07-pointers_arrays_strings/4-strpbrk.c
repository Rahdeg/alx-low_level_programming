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
	if ((s == NULL) || (accept == NULL))
		return (NULL);
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}

	}
	return (NULL);
}
