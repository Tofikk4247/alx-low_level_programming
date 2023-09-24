#include <stdio.h>
/**
 * main -entry poi
 * Desription: "Print comb of numbers"
 * Return: 0(Success)
 */
int main(void)
{
	int t;

	for (t = 48; t <= 57; t++)
	{
		putchar(t);
		if (t == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
