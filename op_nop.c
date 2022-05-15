#include "monty.h"

/**
* op_nop - Ne rien faire
*
* @stack: la pile..
* @line_number: le numéro de la ligne
*
* Return: Nothing, cause void function
*/
void op_nop(__attribute__((unused)) stack_t **stack, unsigned int line_number)
{
	int i;

	i = line_number;
	line_number = i;
}
