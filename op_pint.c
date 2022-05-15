#include "monty.h"


/**
* op_pint - Imprime l'élément supérieur de la pile
*
* @stack: la pile.
* @line_number: le numéro de ligne
*
* Return: rien car fonction void
*/
void op_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n", line_number);
		free(globalVar.lineBuff);
		freeAll();
		fclose(globalVar.file);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
