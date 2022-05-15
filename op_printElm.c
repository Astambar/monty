#include "monty.h"


/**
* op_printElm - Print an instruction given in parameters
*
* @stack: The stack.
* @line_number: The num of the line
*
* Return: Nothing, cause void function
*/
void op_printElm(__attribute__((unused))stack_t **stack,
unsigned int line_number)
{
	if (!globalVar.arrayCommand[1])
	{
		dprintf(STDERR_FILENO,
		"L%d: No instructions | print instructions\n", line_number);
		free(globalVar.lineBuff);
		freeAll();
		fclose(globalVar.file);
		exit(EXIT_FAILURE);
	}

	printf("%s\n", globalVar.arrayCommand[1]);
}
