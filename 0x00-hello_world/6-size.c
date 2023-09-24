#include <stdio.h>
/**
 * main - A program that prints the size of different data types
 * Return: 0(Success)
 */
int main(void)
{
	char m;
	int n;
	long int h;
	long long int i;
	float j;

	printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(m));
	printf("Size of an int: %lu byte(s)", (unsigned long)sizeof(n));
	printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(h));
	printf("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(i));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(j));
	return (0);
}
