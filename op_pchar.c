#include "monty.h"


/**
* op_pchar - Affiche si possible l'élément du haut de la pile dans un char
*
* @stack: la pile.
* @line_number: le numéro de ligne.
*
* Return: rien car fonction void
*/
void op_pchar(stack_t **stack, unsigned int line_number)
{
	if (!*stack || (*stack)->n > 127 || (*stack)->n < 0)
	{
		if (!*stack)
			dprintf(STDERR_FILENO, "L%d: can't pchar, stack empty\n", line_number);
		else if ((*stack)->n > 127 || (*stack)->n < 0)
			dprintf(STDERR_FILENO,
			"L%d: can't pchar, value out of range\n", line_number);
		free(globalVar.lineBuff);
		freeAll();
		fclose(globalVar.file);
		exit(EXIT_FAILURE);
	}
	putchar((*stack)->n);
	putchar('\n');
}
