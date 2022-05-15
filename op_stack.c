#include "monty.h"

/**
* op_stack - Mode pile
*
* @stack: La pile.
* @line_number: numéro de ligne.
*
* Return: rien car fonction void
*/
void op_stack(__attribute__((unused)) stack_t **stack,
unsigned int line_number)
{
	int i;

	i = line_number;
	line_number = i;
	if (globalVar.etat == 0)
		return;
	globalVar.etat = 0;
}
