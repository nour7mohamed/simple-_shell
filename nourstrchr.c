#include "main.h"
/**
 * nourstrchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: the pointer to the first occurrence of the character c
 */
char *nourstrchr(char *s, int c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return (NULL);
}
