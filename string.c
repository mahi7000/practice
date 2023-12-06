#include "shell.h"

size_t _strcspn(const char *str, const char *reject)
{
	const char *ptr;
	size_t count = 0;

	for (; *str != '\0'; str++)
	{
		for (ptr = reject; *ptr != '\0'; ptr++)
		{
			if (*str == *ptr)
				return count;
		}
		count++;
	}
	return (count);
}

void remove_whitespace(char *str)
{
	int len = strlen(str);
	int i = len - 1;

	while (i >= 0 && str[i] == ' ')
	{
		str[i] = '\0';
		i--;
	}
}
