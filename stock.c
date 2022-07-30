#include "shell.h"
/**
 * stock - storing args
 * @buff: command line
 * @delimeters: list of char
 * Return: array of argument
 */
char **stock(buff, delimiters)
{
	char **args, *token, *str;
	int nb, i = 0;

	nb = count(buff, ' ');
	token = strtok(buff, delimiters);
	args = malloc(sizeof(char *) * (nb + 1));
	args[i] = strdup(token);
	while (token && ++i)
	{
		token = strtok(NULL, delimiters);
		if (token)
		{
			args[i] = strdup(token);
		}
	}
	args[i] = NULL;
	if (count_args(args[0], '/') > 1)
	{
		token = strtok(args[0], "/");
		while (token)
		{
			str = strdup(token);
			token = strtok(NULL, "/");
			if (token)
			{
				free(str), str = NULL;
			}
		}
		free(args[0]), args[0] = NULL;
		args[0] = strdup(str);
		free(str), str = NULL;
	}
	free(buff), buff = NULL;
	return (args);
}
