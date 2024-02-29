#include "main.h"

/**
 * tokenizer - Retrieves words from a given string.
 * @placeholder: An address of a pointer to a string.
 *
 * Return: A word from the string.
 */

char *tokenizer(char **placeholder)
{
	char *word;
	char *str = *placeholder;

	while (*str)
	{
		if (*str != ' ')
		{
			word = str;
			while (*str != '\0')
				++str;

			*placeholder = ++str;
			return (word);
		}
		++str;
	}
	return (NULL);
}

/**
 * strtow - A function that splits a string into words.
 * @str: A given string.
 *
 * Return: An array of words.
 */

char **strtow(char *str)
{
	char *placeholder = strdup(str);
	int wc = 0;       /* wordCount */
	int inWord = 0;   /* inside a word */
	int i = 0;  /* i for iterating through str, j for updating placeholder */
	char **arr;

	if (!str)
		return (NULL);

	while (placeholder[i])
	{
		if (placeholder[i] != ' ' && inWord == 0)
		{
			inWord = 1;
			++wc;
		}
		else if (placeholder[i] == ' ' && inWord == 1)
		{
			inWord = 0;
			placeholder[i] = '\0';
		}
		++i;
	}

	arr = malloc(sizeof(char *) * (wc + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (wc--)
	{
		arr[i] = tokenizer(&placeholder);
		i++;
	}
	arr[i] = (NULL);
	return (arr);
}
