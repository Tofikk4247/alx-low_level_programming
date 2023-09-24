#include <stdio.h>
/**
 * main - original function
 * Description: "Print lowercase and uppercase"
 * Return: 0(Success)
 */
int main(void)
{
	int m = 97;
	int b = 65;

	while (m <= 122)
	{
		putchar(m);
		m++;
	}

	while (b <= 90)
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
