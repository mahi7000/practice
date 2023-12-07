#ifndef SHELL_H
#define SHELL_H

/*header files*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/*wait*/
#include <sys/types.h>
#include <sys/wait.h>

/*external*/

extern char **environ;

/*prototypes*/

void _print(char *string);
int _strlen(char *s);
size_t _strcspn(const char *str, const char *reject);
char *mod_getline(void);
void remove_whitespace(char *str);
void remove_leading(char *str);

#endif
