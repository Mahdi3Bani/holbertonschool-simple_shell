#include "shell.h"
/**
 * read_cmd - read the command
 * Return: command
 */
char *read_cmd(void)
{
	size_t s = 0;
	int i = 0;
	char *buff;
	if (isatty(STDIN_FILENO))
		printf("$: ");
	i = getline(&buff, &s, stdin);
	if (i == EOF)
	{
		free(buff);
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "\n", 1);
		exit(EXIT_SUCCESS);
	}
	buff[i - 1] = '\0';

	return (buff);
}
