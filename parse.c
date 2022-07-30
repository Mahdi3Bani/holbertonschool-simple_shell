#include "shell.h"
/**
 *parse - just parsing
 *@argument: the command
 *Return: command line
 */
char *parse(char **argument)
{
	int i;

	if (!strcmp(argument[0], "exit"))
	{
		clear(argument);
		exit(EXIT_SUCCESS);
	}
	else if (!strcmp(argument[0], "env"))
	{
		for (i = 0; env[i]; i++)
		{
			write(STDOUT_FILENO, env[i], strlen(env[i]));
			write(STDOUT_FILENO, "\n", 1);
		}
		clear(argument);
		return (NULL);
	}
	else
		return (argument[0]);
}
