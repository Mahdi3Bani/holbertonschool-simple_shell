#include "shell.h"
/**
 *count - counting the arguments
 *@str : command
 *@c: its just an input
 *Return: count
 */
unsigned int count(char *str, const char c)
{
	unsigned int i, count = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == c && str[i + 1] != c)
			count++;
	}
	return (count + 1);
}