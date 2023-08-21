#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: Number of arguments passed
 * @argv: Array of arguments passed
 *
 * Return: Always 0 (indicating success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
