#include "main.h"

/**
 * nourtoken - Tokenizes a string.
 * @userLine: User input.
 * Return: Tokenized string.
 */
char **nourtoken(char *userLine)
{
	char **tokens = malloc(sizeof(char *) * 100);
	char *token;
	int tokencount = 0;

	if (tokens == NULL)
	{
		perror("Error");
		exit(1);
	}

	token = strtok(userLine, " ");
	while (token != NULL)
	{
		tokens[tokencount] = nourstrdup(token);
		if (tokens[tokencount] == NULL)
		{
			perror("Error");
			exit(1);
		}
		tokencount++;
		token = strtok(NULL, " ");
	}

	tokens[tokencount] = NULL;
	return (tokens);
}
