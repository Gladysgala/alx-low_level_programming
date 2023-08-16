#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: pointer to destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to copy
 *
 * Return: Pointer to destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
