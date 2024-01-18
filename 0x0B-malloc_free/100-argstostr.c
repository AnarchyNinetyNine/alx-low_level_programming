#include "main.h"

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: Argument count.
 * @av: Argument Vector.
 *
 * Return: # NULL if ac == 0, if av == NULL, or on failure.
 *         # A pointer to a new string on suceess.
 */

char *argstostr(int ac, char **av)
{
	char *ptr;

	int i = 1;
	int totalCount = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		char *placeholder = av[i++];

		while (*placeholder++)
			totalCount++;
	}

	ptr = (char *) malloc(sizeof(char) * (totalCount + ac));
	if (ptr == NULL)
		return (NULL);

	i = 1;

	while (i < ac)
	{
		char *placeholder = av[i];

		while (*placeholder)
			*ptr++ = *placeholder++;
		i++;
		*ptr++ = '\n';
	}
	*ptr++ = '\0';
	ptr -= (totalCount + ac);
	return (ptr);
}
