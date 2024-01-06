#include "main.h"

/**
 * nourprintenv - Prints the environment.
 * @env: Environment.
 */
void nourprintenv(char **env)
{
	while (*env != NULL)
	{
		put_nour(*env);
		env++;
		put_nour("\n");
	}
}
