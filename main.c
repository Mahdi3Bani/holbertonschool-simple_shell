#include "shell.h"
/**
 * main - the main...
 * @argc: argument count
 * @argv: argument value
 * Return: 0
 */
int main(int argc __attribute__((unused)), char **argv)
{
	char *buff, delimiters[] = "", *str, *error, **argument;
	int l = 0;
	pid_t pid = 0;

	while (1)
	{
		l++;
		buff = read_cmd();
		argument = stock(buff, delimiters);
		buff = NULL;
		buff = parse(argument);
		if (buff)
		{
			str = _path(argument[0]);
			error = strdup(argument[0]);
			free(argument[0]);
			argument[0] = strdup(str);
			free(str);
			str = NULL;
			if (!argument[0])
			{
				_error(l, &argv[0], error);
				free(error);
				error = NULL;
			}
			else
			{
				free(error);
				error = NULL;
				if (pid == 0)
					execve(argument[0], argument, NULL);
				else
					waitpid(pid, NULL, 0);
			}
		}
		clear(argument);
	}
	return (0);
}
