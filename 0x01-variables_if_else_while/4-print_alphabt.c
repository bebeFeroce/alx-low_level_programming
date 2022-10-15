#include <stdio.h>

/**
 * main - prints the alphabet except the characters e and q
 *
 * Return: Always 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}

		alpha++;
	}
	putchar('\n');

	return (0);
}
