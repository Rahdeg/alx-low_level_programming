#include <main.h>

/**
 * _strchr - a function ...
 * @s: the chaine
 * @c: the char
 *
 * Return: character value
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
