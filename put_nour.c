#include "main.h"
/**
 * put_nour - print to terminal
 * @str: string to print
 * Return: 0
 */
int put_nour(char *str)
{
	return (write(1, str, nourstrlen(str)));
}
