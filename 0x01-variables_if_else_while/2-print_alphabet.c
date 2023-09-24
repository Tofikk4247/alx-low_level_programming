#include <stdio.h>
/**
 * main - original function
 * Description: "Print lowercase"
 * Return: 0(Success)
 */
int main(void)
{
	int m = 97;

	while (m <= 122)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
