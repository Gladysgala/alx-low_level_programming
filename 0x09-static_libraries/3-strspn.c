#include "main.h"
#include <string.h>
/**
 * _strspn - Calculates the length of the initial segment of a string
 * that consists only of characters from a specified accept string.
 * @s: The string to be searched.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of characters in the initial segment of 's'
 *         which are in 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

