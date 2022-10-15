#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int number = '0';
	int a_to_f = 'a';

	while (number <= '9') /* packaging for printing from 0 to 9 */
	{
		putchar(number);
		number++;
	}

	while (a_to_f <= 'f') /* packaging for printing from a to f */
	{
		putchar(a_to_f); /* we print them after the numbers */
		a_to_f++;
	}

	putchar('\n');

	return (0);
}
