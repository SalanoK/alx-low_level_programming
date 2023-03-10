#include "main.h"
/**
 * _memset - fills the first n bytes of the memory
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: the number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[1] = b;
		n--;
	}
	return (s);
}
