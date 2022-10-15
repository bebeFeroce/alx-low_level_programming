#include <stdio.h>

/**
 * main - Entry point; print the alphabet char
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';
	
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
