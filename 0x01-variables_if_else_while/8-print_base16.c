#include <stdio.h>
/**
 * main - entry point
 * Description: numbers of base 16 in lowercase,
 * Return: 0(Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	for (b = 97; b <= 102; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
