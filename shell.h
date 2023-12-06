#ifndef SHELL_H
#define SHELL_H

/*header files*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/*external*/

extern char **environ;

/*prototypes*/

void _print(char *string);
int _strlen(char *s);
char *mod_getline(void);

#endif
