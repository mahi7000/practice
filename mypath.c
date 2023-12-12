#include "shell.h"

/**
 * main - path
 * @argc: count
 * @argv: vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *mypath = getenv("PATH");
	int x = my_strlen(mypath);
	(void)argc;
	(void)argv;

	write(STDOUT_FILENO, mypath, x);
	return (0);
}
