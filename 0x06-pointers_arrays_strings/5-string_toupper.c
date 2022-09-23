#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 *                  of a string to uppercase.
 * @a: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *a)
{
	char *ptr = a;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32;
		ptr++;
	}
	return (a);
}
