#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int y;
	for (y = 'A'; y <= 'Z'; y++)
			{
			putchar(tolower(y));
			}
			putchar('\n');
			return (0);
			}
