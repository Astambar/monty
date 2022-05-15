#include "monty.h"


/**
* op_rotr - Le haut de la pile devient le dernier élément
*
* @stack: La pile.
* @line_number: numéro de ligne.
*
* Return: rien car fonction void
*/
void op_rotr(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *ptmp = *stack;
	int i = 0;

	if (ptmp == NULL)
		return;

	for (; ptmp->next; ptmp = ptmp->next, i++)
	;
	if (i == 0)
		return;
	ptmp->prev->next = NULL;
	ptmp->next = (*stack);
	ptmp->prev = NULL;
	*stack = ptmp;
}
