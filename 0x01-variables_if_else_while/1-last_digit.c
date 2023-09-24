#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: 'get the last digit of a number'
 * Return: always 0(Success)
 */
int main(void)
{
	int n;
	int fd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	fd = n % 10;
	if (fd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, fd);
	}
	else if (fd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, fd);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 not 0\n", n, fd);
	}
	return (0);
}
