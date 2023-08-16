#include "main.h"
#include <string.h>

/**
 * _strcpy - Copies of string pointed to 'src' to buffer pointed to by 'dest
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: A pointer to the destination buffer 'dest'.
 */
char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}

