#include "monty.h"


/**
* chercheLaFonctionAssocierALaCommande - cherche toute les fonction executable
* @line: Ligne active
* Return: la fonction ne renvoi rien car elle est void
*/
void (*chercheLaFonctionAssocierALaCommande(void))(stack_t **stack_t,
unsigned int line)
{
	int j;

	instruction_t p[] = {
		{"push", op_push},
		{"pall", op_pall},
		{"pop", op_pop},
		{"pint", op_pint},
		{"nline", op_newLine},
		{"print", op_printElm},
		{"nop", op_nop},
		{"add", op_add},
		{"sub", op_sub},
		{"mul", op_mul},
		{"div", op_div},
		{"mod", op_mod},
		{"swap", op_swap},
		{"pchar", op_pchar},
		{"pstr", op_pstr},
		{"rotl", op_rotl},
		{"rotr", op_rotr},
		{"stack", op_stack},
		{"queue", op_queue},
		{"NULL", NULL},
	};
	for (j = 0; p[j].opcode != NULL; j++)
	{
		if (strcmp("NULL", p[j].opcode) == 0)
			break;
		if (strcmp(globalVar.arrayCommand[0], p[j].opcode) == 0)
			return (p[j].f);
	}

	return (NULL);
}
