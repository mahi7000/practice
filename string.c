#include "shell.h"

/**
 * _strcspn - counts the number of characters not similar
 * @str: first string
 * @reject: second string to be rejected
 *
 * Return: number of non-similar characters
 */

size_t _strcspn(const char *str, const char *reject)
{
	const char *ptr;
	size_t count = 0;

	for (; *str != '\0'; str++)
	{
		for (ptr = reject; *ptr != '\0'; ptr++)
		{
			if (*str == *ptr)
				return (count);
		}
		count++;
	}
	return (count);
}

/**
 * remove_whitespace - function that removes trailing whitespaces
 * @str: string from which whitespaces are removed
 *
 */

void remove_whitespace(char *str)
{
	int len = _strlen(str);
	int i = len - 1;

	while (i >= 0 && str[i] == ' ')
	{
		str[i] = '\0';
		i--;
	}
}
