#include "monty.h"


/**
* op_swap - Échangez les deux éléments de la pile supérieure
*
* @stack: La pile.
* @line_number: numéro de ligne.
*
* Return: rien car fonction void
*/
void op_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *ptmp = *stack;
	int tmp;

	if (!ptmp || !ptmp->next)
	{
		dprintf(STDERR_FILENO, "L%d: can't swap, stack too short\n", line_number);
		free(globalVar.lineBuff);
		freeAll();
		fclose(globalVar.file);
		exit(EXIT_FAILURE);
	}

	tmp = ptmp->n;
	ptmp->n = ptmp->next->n;
	ptmp->next->n = tmp;
}
