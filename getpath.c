#include "main.h"
/**
 * getpath - gets the path of the executable
 * @command: command to execute
 * Return: path of the executable (or NULL on error)
 */
char *getpath(char *command)
{
	char *path = getenv("PATH");
	char *token, *buff = NULL;
	size_t buff_size;

	if (nourstrcmp(command, "/bin/") == 0)
		return (nourstrdup(command));
	if (path == NULL || !*path)
		return (NULL);
	while ((token = strtok(path, ":")))
	{
		path = NULL;
		buff_size = nourstrlen(token) + nourstrlen(command) + 2;
		buff = (char *)malloc(buff_size);
		if (!buff || checkbuf(buff))
			return (NULL);
		nourstrcpy(buff, token);
		nourstrcat(buff, "/");
		nourstrcat(buff, command);
		if (access(buff, F_OK) == 0)
			return (buff);
		free(buff);
	}
	return (NULL);
}
