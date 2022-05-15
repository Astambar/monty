
#include "monty.h"

/**
 * _count_word - compte le nombre de mots
 *
 * @str: chaîne saisi
 *
 * Return: le nombre de mots
 */
int _count_word(char *str)
{
	int i = 0, word_count = 0;

	for (; *(str + i); i++)
		if (*(str + i) != ' ')
		{
			word_count++;
			i += _len_word(str + i);
		}
	return (word_count);
}
