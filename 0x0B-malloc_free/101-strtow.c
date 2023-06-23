#include "main.h"

/**
 * strtow - Splits a string into words
 * @str: String to split
 *
 * Return: An array of words (on sucess), NULL otherwise
 */
char **strtow(char *str)
{
	char **words = NULL;
	size_t nwords, word_idx, i, j, k;

	if (!str || !(*str))
		return (NULL);

	nwords = count_words(str);
	words = malloc(sizeof(char *) * nwords);
	if (!words || !nwords)
	{
		free(words);
		return (NULL);
	}

	for (i = word_idx = 0; i < nwords; i++)
	{
		for (k = word_idx; str[k]; k++)
		{
			if (str[k] == ' ')
				word_idx++;

			if (str[k] != ' ' && (str[k + 1] == ' ' || !str[k + 1]))
			{
				words[i] = malloc(sizeof(char) * (k - word_idx + 2));
				if (!words[i])
				{
					free_words(words);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; word_idx <= k; word_idx++, j++)
			words[i][j] = str[word_idx];
		words[i][j] = '\0';
	}
	words[i] = NULL;
	return (words);
}

/**
 * count_words - Counts the number of words in a string
 * @str: String to count
 *
 * Return: Number of words
 */
size_t count_words(char *str)
{
	size_t count = 0;

	while (*str++)
		if (*str != ' ')
			if (*(str + 1) == ' ' || !(*(str + 1)))
				count++;

	return (count);
}

/**
 * free_words - Frees an array of strings
 * @words: Array to free
 */
void free_words(char **words)
{
	int i;

	if (!words)
		return;

	for (i = 0; words[i]; i++)
		free(words[i]);

	free(words);
}
