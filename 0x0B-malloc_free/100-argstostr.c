#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * argstostr -  concatenates all the arguments
 * @ac: input value
 * @av: double pointer
 *
 * Return: pointer to a new string or NULL
 */
char *argstostr(int ac, char **av)
{
	int i;
	int t_len, n_len, f_len, p = 0;
	char *results;

	if (ac == 0 || av == NULL)
		return (NULL);

	t_len = 0;
	for (i = 0; i < ac; i++)
		t_len += strlen(av[i]);

	n_len = ac - 1;
	t_len += n_len;
	f_len = t_len + 2;

	results = malloc(f_len);
	if (results == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		strcpy(results + p, av[i]);
		p += strlen(av[i]);

		if (i != ac - 1)
			results[p++] = '\n';
	}
	results[p] = '\0';
	return (results);
}
