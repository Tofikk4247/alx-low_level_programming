#include "main.h"
/**
 * _memset - fill memory wth a value
 * @s: starting address
 * @b: required result
 * @n:number of bytes need to be changed
 *
 *Return: new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
