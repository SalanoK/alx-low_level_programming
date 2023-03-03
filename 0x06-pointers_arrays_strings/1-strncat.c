#include "main.h"

/**
 * _strcat - concatenates two strings with n bytes
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: dest
 */
char *_strcat(char *dest, char *src, int n)
{

	int index = 0, dest_len = 0
	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);

}
