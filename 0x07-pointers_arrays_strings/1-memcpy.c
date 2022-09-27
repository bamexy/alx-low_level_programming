#include "main.h"
/**
 * *_memcpy - function that copies memory area
 * @dest: destination of copy
 * @src: source of copy
 * @n: unsigned int
 * Return: destination of the copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);

}
