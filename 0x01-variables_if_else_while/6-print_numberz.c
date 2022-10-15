#include <stdio.h>

/**
 * main - print number 0-9 with 0 starting from
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
