#include "monty.h"


/**
* op_mod - op_mod - Calcule le reste de la division du deuxième sommet
* et supprime le noeud suppérieure
*
* @stack: La pile
* @line_number: numéro de Ligne.
*
* Return: ne renvoi rien car fonction void
*/
void op_mod(stack_t **stack, unsigned int line_number)
{
	stack_t *ptmp = *stack;
	int count = 0;

	if (*stack == NULL || ptmp->next == NULL || ptmp->n == 0)
	{
		if (!*stack || !ptmp->next)
			dprintf(STDERR_FILENO, "L%d: can't mod, stack too short\n", line_number);
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
	count %= ptmp->n;
	ptmp = ptmp->next;
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
