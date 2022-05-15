#include "monty.h"


/**
* op_add - Additione le contenu de deux nœuds
* et supprimer le nœud supérieur
*
* @stack: La pile.
* @line_number: Le numéro de la ligne.
*/
void op_add(stack_t **stack, unsigned int line_number)
{
	stack_t *ptmp = *stack;
	int count = 0;

	if (*stack == NULL || ptmp->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't add, stack too short\n", line_number);
		free(globalVar.lineBuff);
		freeAll();
		fclose(globalVar.file);
		exit(EXIT_FAILURE);
	}

	count += ptmp->n;
	ptmp = ptmp->next;
	count += ptmp->n;
	ptmp->n = count;

	ptmp = ptmp->prev;

	if (ptmp->next != NULL)
	{
		ptmp->next->prev = NULL;
		(*stack) = ptmp->next;
	}
	else if (ptmp->next == NULL)
		ptmp->prev->next = NULL;
	else
	{
		ptmp->next->prev = ptmp->prev;
		ptmp->prev->next = ptmp->next;
	}
	free(ptmp);
}
