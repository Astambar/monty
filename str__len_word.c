#include "monty.h"

/**
 * _len_word - Calcule la longueur d'un mot
 *
 * @s: mot saisi
 *
 * Return: Longueur du mot
 */
int _len_word(char *s)
{
	int i = 0;

	for (; *(s + i) != ' ' && *(s + i); i++)
	;
	return (i);
}
