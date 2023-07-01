#include "main.h"

/**
 * rot13 - change letters to ROT13
 * @s: analized string
 *
 * Return: string with all letters in ROT13 base
 */

char *rot13(char *s)
{
	char test[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 51; j++)
		{
			if (*(s + i) == test[j])
			{
				*(s + i) = rot[j];
				break;
			}
		}
		i++;
	}

	return (s);
}

