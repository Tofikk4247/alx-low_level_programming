#include "main.h"
/**
 * _memcpy - copies area
 * @dest: stored location
 * @src: copy location
 * @n:number of bytes need to be changed
 *
 * Return: new value for n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
