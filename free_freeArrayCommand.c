#include "monty.h"

/**
* freeArrayCommand - vide le tableau des commandes
*/
void freeArrayCommand(void)
{
	int i = 0;

	for (; globalVar.arrayCommand[i]; i++)
		free(globalVar.arrayCommand[i]);
	free(globalVar.arrayCommand);
}
