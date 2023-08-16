#include "main.h"
#include <string.h>

/**
 * _strchr - Locates a character in a string.
 * @s: The input string.
 * @c: The character to locate.
 *
 * Return: Pointer to the first occurrence of the character,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}

