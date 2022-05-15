#include "monty.h"

/**
* op_pall - Affiche la valeur en haut de la pile, suivie d'une nouvelle ligne
*
*@stack: Pile où sont stockées les valeurs.
*@line_number: ligne que nous voulons lires
*
* Return: Rien car c'est une  fonction void
*/
void op_pall(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (stack == NULL)
		return;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
