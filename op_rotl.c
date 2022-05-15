#include "monty.h"


/**
* op_rotl - Le dernier élément de la pile devient le premier
*
* @stack: la pile.
* @line_number: Numéro de ligne.
*
* Return: rien car fonction void
*/
void op_rotl(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *ptmp = *stack, *courant = *stack;

	if (ptmp == NULL)
		return;
	for (; ptmp->next; ptmp = ptmp->next)
	;
	if (ptmp == *stack)
		return;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	courant->next = NULL;
	courant->prev = ptmp;
	ptmp->next = courant;
}
