#include "main.h"
/**
 * checkbuf - checks if the buffer is full
 * @buff: buffer to check
 * Return: 1 if allocation failed, 0 otherwise
 */
int checkbuf(char *buff)
{
	if (buff == NULL)
	{
		perror("malloc");
		return (1);
	}
	return (0);
}
