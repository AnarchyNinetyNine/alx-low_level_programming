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
 * fill_array - Filles and array wit splitted words.
 *@arr: An array.
 *@placeholder: The string to be splitted.
 *@wc: WordCount.
 *
 *Return: The filled array.
 */
char **fill_array(char **arr, char *placeholder, int wc)
{
	int i = 0;

	while (wc--)
	{
		arr[i] = tokenizer(&placeholder);
		i++;
	}
	arr[i] = (NULL);
	return (arr);
}

/**
 * wc - Counts the words inside a given string.
 *@placeholder: A string.
 *
 *Return: # The word count (On Success).
 *        # 0 otherwise.
 */

int wc(char *placeholder)
{
	int wc = 0;       /* wordCount */
	int inWord = 0;   /* inside a word */
	int i = 0;        /* iterator */

	while (placeholder[i])
	{
		if (placeholder[i] != ' ' && inWord == 0)
		{
			inWord = 1; /* Open inWord mode */
			++wc; /* Increment the wordCount */
		}
		else if (placeholder[i] == ' ' && inWord == 1)
		{
			inWord = 0; /* Clode inWord mode */
			placeholder[i] = '\0'; /* Poison the string */
		}
		++i;
	}
	return (wc);
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
	int wCount = 0; /* WourdCount */
	char **arr;     /* The malloc'ed array */

	if (!str || strcmp(str, "") == 0)
		return (NULL); /* Exit if no string provided */

	wCount = wc(placeholder); /* Get the wordCount */

	if (wCount == 0)
		return (NULL); /* Exit if no word found */

	arr = malloc(sizeof(char *) * (wCount + 1)); /* Allocate memory */

	if (!arr)
		return (NULL); /* Exit if cannot allocate memory */

	return (fill_array(arr, placeholder, wCount)); /* Return an rray of words */
}
