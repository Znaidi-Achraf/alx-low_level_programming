#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    *
 *     * Return: Always 0 (Success)
*/

int main(void)
{
printf("Size of char: %lu bytes\n", (unsigned long int)sizeof(char));
printf("Size of int: %lu bytes\n", (unsigned long int)sizeof(int));
printf("Size of a long int: %lu bytes\n", (unsigned long int)sizeof(long int));
printf("Size of a long long int: %lu bytes\n", (unsigned long int)sizeof(long long int));
printf("Size of float: %lu bytes\n", (unsigned long)sizeof(float));
  return (0);
}
