#include <main.h>
#define NULL 0

/**
 * _strchr - a function ...
 * @s: the chaine
 * @c: the char
 *
 * Return: 1 or 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
