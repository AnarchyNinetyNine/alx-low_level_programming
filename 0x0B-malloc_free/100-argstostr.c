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
	char *ptr, *placeholder;
	int i, j, totalCount;

	i = j = totalCount = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		placeholder = av[i++];
		j = 0;
		while (placeholder[j++])
			totalCount++;
	}

	ptr = (char *) malloc(sizeof(char) * (totalCount + ac + 1));
	if (ptr == NULL)
		return (NULL);

	i = 0;

	while (i < ac)
	{
		placeholder = av[i];
		j = 0;
		while (placeholder[j])
			*ptr++ = placeholder[j++];
		i++;
		*ptr++ = '\n';
	}
	*ptr++ = '\0';
	ptr -= (totalCount + ac + 1);
	return (ptr);
}
