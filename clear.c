#include "shell.h"
/**
 * clear - clearing the memory
 * @arguments: arguments :)
 */
void clear_memory(char **arguments)
{
	int i;

	if (**arguments)
	{
		for (i = 0; arguments[0]; i++)
		{
			free(arguments[i]);
			arguments[i] = NULL;
		}
		free(arguments);
		arguments = NULL;
	}
}
