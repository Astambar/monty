#include "monty.h"


/**
* op_div - Divise le contenu de deux nœuds
* et supprimer le nœud supérieur
*
* @stack: La pile.
* @line_number: le numéro de la ligne.
*/
void op_div(stack_t **stack, unsigned int line_number)
{
	stack_t *ptmp = *stack;
	int count = 0;

	if (!*stack || !ptmp->next || ptmp->n == 0)
	{
		if (!*stack || !ptmp->next)
			dprintf(STDERR_FILENO, "L%d: can't div, stack too short\n", line_number);
		else if (ptmp->n == 0)
			dprintf(STDERR_FILENO, "L%d: division by zero\n", line_number);
		free(globalVar.lineBuff);
		freeAll();
		fclose(globalVar.file);
		exit(EXIT_FAILURE);
	}
	ptmp = ptmp->next;
	count += ptmp->n;
	ptmp = ptmp->prev;
	count /= ptmp->n;
	ptmp = ptmp->next;
	ptmp->n = count;
	ptmp = ptmp->prev;
	if (ptmp->next)
	{
		ptmp->next->prev = NULL;
		(*stack) = ptmp->next;
	}
	else if (!ptmp->next)
		ptmp->prev->next = NULL;
	else
	{
		ptmp->next->prev = ptmp->prev;
		ptmp->prev->next = ptmp->next;
	}
	free(ptmp);
}
