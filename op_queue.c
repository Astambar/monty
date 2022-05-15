#include "monty.h"

/**
* op_queue - Mode file d'attente
*
* @stack: La pile.
* @line_number: Numéro de ligne.
*
* Return: rien car fonction void
*/
void op_queue(__attribute__((unused)) stack_t **stack,
unsigned int line_number)
{
	int i;

	i = line_number;
	line_number = i;
	if (globalVar.etat == 1)
		return;
	globalVar.etat = 1;
}
