#include "main.h"

/**
 * _strncpy - concatenate strings, defining the size of the second string.
 *
 * @dest: pointer to the destination input buffer
 * @src: pointer to source input buffer
 * @n: the size of the second string
 * Return: always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + i) = *(src + i);
	for ( ; i < n; i++)
		*(dest + i) = '\0';
	return (dest);
}

