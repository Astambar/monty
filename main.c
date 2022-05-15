#include "monty.h"

/**
* main - Le cœur du programme
*
* @argc: Nombre d'arg
* @argv: Tableau d'arguments
*
* Return: 0 en cas de succès
*/
int main(int argc, char **argv)
{
	unsigned int line = 1;
	size_t lineSize;
	void (*f)(stack_t **stack_t, unsigned int line);

	checkInput(argc);
	init_data();
	openFile(argv[1]);
	while (getline(&globalVar.lineBuff, &lineSize, globalVar.file) != -1)
	{
		traitementDeLigne();
		if (strlen(globalVar.lineBuff) != 0)
		{
			_strtow(globalVar.lineBuff);
			f = chercheLaFonctionAssocierALaCommande();
			if (f == NULL)
			{
				dprintf(STDERR_FILENO,
				"L%d: unknown instruction %s\n", line, globalVar.arrayCommand[0]);
				free(globalVar.lineBuff);
				freeAll();
				fclose(globalVar.file);
				exit(EXIT_FAILURE);
			}
			f(&globalVar.head, line);
			freeArrayCommand();
		}
		line++;
	}
	free(globalVar.lineBuff);
	fclose(globalVar.file);
	freeList(globalVar.head);
	return (0);
}
