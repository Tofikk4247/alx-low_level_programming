#include "main."
/**
 * _strpbrk - startiing point
 * @s: input
 * @accept: input
 * Return: 0(Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
				return (s);
		}
		s++;
	}
	return (0);
}
