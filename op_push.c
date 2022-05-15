#include "monty.h"

/**
* op_push - Poussez un élément vers le haut de la pile
*
* @stack: La pile
* @line_number: numéro de ligne
*
* Return: Rien car fonction void
*/
void op_push(stack_t **stack, unsigned int line_number)
{
	int num;

	if (!globalVar.arrayCommand[1])
	{
		dprintf(STDERR_FILENO, "L%d: usage: push integer\n", line_number);
		free(globalVar.lineBuff);
		freeAll();
		fclose(globalVar.file);
		exit(EXIT_FAILURE);
	}

	num = isNumber(globalVar.arrayCommand[1], line_number);

	if (stack == NULL)
		return;
	if (globalVar.etat == 0)
		add_dnodeint(stack, num);
	else
		add_dnodeint_end(stack, num);

}
