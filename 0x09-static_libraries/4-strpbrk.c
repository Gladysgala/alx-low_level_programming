#include "main.h"
#include <string.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to search for.
 *
 * Return: A pointer to the first occurrence in 's' of any byte in 'accept',
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

