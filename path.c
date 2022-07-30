#include "shell.h"
/**
 * _path - find the path
 * @f: command
 * Return: the path
 */
char *_path(char *f)
{
	int i = 0;
	char *token, *l, *p, *str, *slach = "/\0";

	str = find_path();
	token = strtok(str, "=");
	while (token)
	{
		token = strtok(NULL, ":");
		if (token)
		{
			l = malloc(sizeof(char) * (strlen(token) + strlen(f) + 2));
			strcpy(l, token);
			p = strcat(strcat(l, slach), f);
			if (access(p, F_OK) == 0)
				break;
		}
		else
		{
			p = NULL;
			break;
		}
		free(l);
		l = NULL;
		i++;
	}
	free(str);
	str = NULL;
	return (p);
}
