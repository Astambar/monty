#include "monty.h"

/**
 * _strtow - divise une chaîne en mots.
 *
 * @str: Chaîne à diviser
 *
 * Return: NULL si problème, sinon pointeur vers la nouvelle chaîne
 */
void _strtow(char *str)
{
	int i, word, letter, k, j = 0;

	if (!str || *str == '\0')
		return;

	word = _count_word(str);
	if (word == 0)
		return;

	globalVar.arrayCommand = (char **)malloc(sizeof(char *) * (word + 1));
	if (!globalVar.arrayCommand)
		return;

	for (i = 0; i < word; i++)
	{
		for (; *(str + j) == ' ' || *(str + j) == '\t'; j++)
		;

		letter = _len_word(str + j);

		globalVar.arrayCommand[i] = (char *)malloc(sizeof(char) * letter + 1);

		if (!globalVar.arrayCommand[i])
		{
			for ( ; i >= 0; i--)
				free(globalVar.arrayCommand[i]);
			free(globalVar.arrayCommand);
			return;
		}

		for (k = 0; k < letter; k++, j++)
			globalVar.arrayCommand[i][k] = str[j];

		globalVar.arrayCommand[i][k] = '\0';
	}
	globalVar.arrayCommand[i] = NULL;
}
