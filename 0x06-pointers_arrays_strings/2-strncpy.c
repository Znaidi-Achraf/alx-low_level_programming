#include "main.h"

/**
 * _strncpy - a function that copies a string.
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @s: bytes of @src
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

