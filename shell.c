#include "shell.h"

/**
 * main - envoke shell
 * 
 * Return: 0
*/

int main(void)
{
	char *readline;
	char **args = { NULL };

	while (1)
	{
		if (isatty(STDIN_FILENO))
			_print("($) ");
		readline = mod_getline();

		readline[strcspn(readline, "\n")] = '\0';

		execve(readline, args, environ);
		perror("execve");
		free(readline);
	}
	return (0);
}
