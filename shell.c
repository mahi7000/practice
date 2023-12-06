#include "shell.h"

/**
 * main - envoke shell
 * 
 * Return: 0
*/

int main(void)
{
    char *readline;
    const char **args = { NULL };

    while (1)
    {
        if (isatty(STDIN_FILENO))
            _print("($) ");
        readline = mod_getline();

        if (!readline)
            return (-1);
        else
        {
            if (readline[strlen(readline) - 1] == '\n')
                readline[strlen(readline)] = '\0';
            execve(readline, args, environ);
            perror("execve");
            free(readline);
        }
    }

    return (0);
}