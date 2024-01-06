#include "main.h"
/**
 * nourstrlen - returns the length of a string
 * @s: string
 * Return: length
 */
int nourstrlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
