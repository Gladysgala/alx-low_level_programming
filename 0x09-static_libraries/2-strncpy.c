#include "main.h"
#include <string.h>
/**
 * _strncpy - Copies'n' bytes from the 'src' string to the 'dest' string
 * @dest: destination string.
 * @src: source string.
 * @n: number of bytes to be copied.
 *
 * Return: A pointer to the resulting string 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

