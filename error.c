#include "shell.h"
/**
 *_error - prints error msg
 *@l: number line
 *@argument: arg :)
 *@str: what make the error ,)
 */

void _error(int l, char **argument, char *str)
{
	write(STDERR_FILENO, argument[0], strlen(argument[0]));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, itoa(l), strlen(itoa(l)));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, str, strlen(str));
	write(STDERR_FILENO, ": not found\n", 12);
}
