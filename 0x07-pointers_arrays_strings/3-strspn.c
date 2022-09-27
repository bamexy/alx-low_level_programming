#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer string
 * @accept: memory bytes
 * Return: number of bytes from s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int k;
	int c;

	i = 0;
	c = 0;

	while (s[i] != '\0')
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (s[i] == accept[k])
			{
				c++;
				break;
			}
			k++;
		}
		if (accept[k] == '\0')
			break;
		i++;
	}
	return (c);
}
