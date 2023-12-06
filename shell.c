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
	pid_t my_pid;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			_print("($) ");
		readline = mod_getline();

		readline[_strcspn(readline, "\n")] = '\0';
		remove_whitespace(readline);

		my_pid = fork();
		if (my_pid == 0)
		{
			execve(readline, args, environ);
			perror("execve");
		}
		else if (my_pid > 0)
		{
			int status;
			wait(&status);
		}
		else
			perror("fork");

		free(readline);
	}
	return (0);
}
