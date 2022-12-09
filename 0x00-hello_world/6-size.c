nclude <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
		int u;
		long int v;
		long long int w;
		char x;
		float y;

			printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
			printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(u));
			printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(v));
			printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(w));
			printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
			return (0);
}
