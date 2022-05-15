#include "monty.h"


/**
* openFile - Ouvre le fichier donné
*
* @fileName: le nom du fichier à  ouvrire
*
* Return: la fonction ne renvoi rien car elle est void
*/
void openFile(char *fileName)
{
	globalVar.file = fopen(fileName, "r");

	if (!globalVar.file)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", fileName);
		exit(EXIT_FAILURE);
	}
}
