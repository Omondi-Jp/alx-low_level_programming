#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *)
{
	int index = 0;

	while ([index])
	{
		while (!([index] >= 'a' && [index] <= 'z'))
			index++;

		if ([index - 1] == ' ' ||
		   [index - 1] == '\t' ||
		   [index - 1] == '\n' ||
		   [index - 1] == ',' ||
		   [index - 1] == ';' ||
		   [index - 1] == '.' ||
		   [index - 1] == '!' ||
		   [index - 1] == '?' ||
		   [index - 1] == '"' ||
		   [index - 1] == '(' ||
		   [index - 1] == ')' ||
		   [index - 1] == '{' ||
		   [index - 1] == '}' ||
		   index == 0)
			[index] -=32;

		index++;
	}
	return ();
}

