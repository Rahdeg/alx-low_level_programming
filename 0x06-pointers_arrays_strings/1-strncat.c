#include "main.h" 
/**
 * _strncat - a function
 *
 * @dest: the chaine
 * @src: the chaine
 * @n: the number
 *
 * Return: 1 or 0
 */


char *_strncat(char *dest, char *src, int n);
{
	int	i;
	int	j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);
}
