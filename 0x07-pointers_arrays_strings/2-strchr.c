#include <main.h>

/**
 * _strchr - a function ...
 * @s: the chaine
 * @c: character to locate
 *
 * Return: Always 0 (success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return ('\0');
}
