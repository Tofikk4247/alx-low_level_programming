#include "main.h"
/**
 * _strspn - starting point of function
 * @s: input
 * @accept: input
 * Return: 0(Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int t = 0;
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
			{
				t++;
				break;
			}
			else if (accept[m + 1] == '\0')
				return (t);
		}
		s++;
	}
	return (t);
}
