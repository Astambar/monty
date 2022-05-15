#include "monty.h"


/**
* isNumber - Vérifie s'il s'agit d'un nombre
*
* @str: Chaîne à tester
* @line_number: la ligne x
*
* Return: Le nombre converti en entier
*/
int isNumber(char *str, int line_number)
{
	int i = 0;

	for (; str[i]; i++)
	{
		if (str[i] == '-')
			continue;
		if (str[i] < '0' || str[i] > '9')
		{
			dprintf(STDERR_FILENO, "L%d: usage: push integer\n", line_number);
			free(globalVar.lineBuff);
			freeAll();
			fclose(globalVar.file);
			exit(EXIT_FAILURE);
		}
	}
	return (atoi(str));
}
