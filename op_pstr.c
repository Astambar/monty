#include "monty.h"


/**
* op_pstr - Affiche depuis l'élément supérieur de la pile un caractère
* jusqu'à obtenir un arrêt
*
* @stack: la pile.
* @line_number: numéro de ligne.
*
* Return: rien, car c'est une fonction void
*/
void op_pstr(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *ptmp = *stack;

	for (; ptmp; putchar(ptmp->n), ptmp = ptmp->next)
		if (ptmp->n > 127 || ptmp->n <= 0)
			break;
	printf("\n");
}
