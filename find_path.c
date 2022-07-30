#include "shell.h"
/**
 * find_path - findinf the var path :)
 * Return: path
 */
char *find_path(void)
{
   int i = 0, j, flag = 1;
	char *str, *target = "PATH";

	while (env[i++] && flag)
	{
		if (env[i][0] == target[0])
		{
			for (j = 1; j < 3; j++)
			{
				if (env[i][j] != target[j])
				{
					break;
				}
				else if (env[i][2] == target[2])
				{
					str = strdup(env[i]);
					flag = 0;
				}
			}
		}
	}
	return (str);
}