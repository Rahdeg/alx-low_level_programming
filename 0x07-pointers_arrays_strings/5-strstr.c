#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: search area
 * @needle: string to be searcht
 *
 * Return: pointer to the beginning  of the located  substring
 *
 */

char *_strstr(char *haystack, char *needle);
{
	unsigned int i, size = 0;

	while (*(needle + size) != 0)
	{
		size++;


