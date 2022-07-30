#include "shell.h"
/**
 * itoa - converting from int to string
 * @l: int
 * Return: string
 */
char *itoa(unsigned int l)
{
	char *str = NULL;
	unsigned int tmp = 0, digits = 0;

	tmp = l;
	for (digits = 0; tmp != 0; digits++)
	{
		tmp /= 10;
	}
	str = malloc(sizeof(char) * (digits + 1));
	if (str == NULL)
	{
		perror("Fatal Error");
		exit(127);
	}
	str[digits] = '\0';
	for (--digits; l; --digits)
	{
		str[digits] = (l % 10) + '0';
		l /= 10;
	}
	return (str);
}
