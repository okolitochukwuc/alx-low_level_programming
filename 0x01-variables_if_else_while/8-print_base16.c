#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char m;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	for (m = 'a'; m <= 'f'; m++)
		putchar(m);

	putchar('\n');

	return (0);
}

