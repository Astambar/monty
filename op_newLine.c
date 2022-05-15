#include "monty.h"

/**
* op_newLine - Imprimer une nouvelle ligne pour rendre le test clair
*
* @stack: la pile.
* @line_number: ne renvoi rien car fonction void.
*
* Return: rien car fonction void
*/
void op_newLine(__attribute__((unused)) stack_t **stack,
unsigned int line_number)
{
	int i;

	printf("\n");
	i = line_number;
	line_number = i;
}
