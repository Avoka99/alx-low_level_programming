#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: string value
 *
 * Return: a pointer to an array of strings(words)
 */

int count_words(char *str);
char *extract_word(char *str);
void free_words(char **words);

char **strtow(char *str)
{
	int num_words;
	int index = 0;
	char **words, *word;

	if (str == NULL || *str == '\0')
		return (NULL);

	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);

	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);


	word = extract_word(str);
	while (word != NULL)
	{
		words[index++] = word;
		word = extract_word(NULL);
	}

	words[index] = NULL;

	return (words);
}

/**
 * count_words - counts words in the string pointer
 * @str: value of string pointer
 *
 * Return: number of words
 */

int count_words(char *str)
{
	int count = 0;
	int length = strlen(str);
	int i = 0;

	while (i < length)
	{
		while (str[i] == ' ')
			i++;

		if (i == length)
			break;

		count++;

		while (str[i] != ' ' && str[i] != '\0')
			i++;
	}

	return (count);
}

/**
 * extract_word - remove words from the string pointer
 * @str: value of string pointer
 *
 * Return: word
 */

char *extract_word(char *str)
{
	static char *current_str;
	static char *next_str;
	int word_length;
	char *word;

	if (str != NULL)
	{
		current_str = str;
		next_str = str;
	}

	while (*next_str == ' ')
		next_str++;

	if (*next_str == '\0')
		return (NULL);

	current_str = next_str;

	while (*next_str != ' ' && *next_str != '\0')
		next_str++;

	word_length = next_str - current_str;
	word = malloc((word_length + 1) * sizeof(char));

	if (word != NULL)
	{
		strncpy(word, current_str, word_length);
		word[word_length] = '\0';
	}

	return (word);
}

/**
 * free_words - free the memory allocated by strtow
 * @words: double pointer
 *
 * Return: free
 */

void free_words(char **words)
{
	int index;

	if (words == NULL)
		return;

	index = 0;
	while (words[index] != NULL)
	{
		free(words[index]);
		index++;
	}

	free(words);
}
