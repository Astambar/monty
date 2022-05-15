#include "monty.h"

/**
* op_pop - Supprime l'élément supérieur de la pile
*
* @stack: la pile
* @line_number: numéro de ligne
*
* Return: rien car fonction void
*/
void op_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *ptmp = *stack;

	if (*stack == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pop an empty stack\n", line_number);
		free(globalVar.lineBuff);
		freeAll();
		fclose(globalVar.file);
		exit(EXIT_FAILURE);
	}

	if (ptmp->next == NULL)
		*stack = NULL;
	else if (ptmp->next != NULL)
	{
		ptmp->next->prev = NULL;
		(*stack) = ptmp->next;
	}
	free(ptmp);
}
