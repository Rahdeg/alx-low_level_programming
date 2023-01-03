#include <main.h>

/**
 * _strchr - a function ...
 * @s: the chaine
 * @c: character to locate
 *
 * Return: pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s != 0)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return ('\0');
}
