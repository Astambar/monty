#include "monty.h"

/**
* checkInput - verifie que la commande entrée est correct
*
* @argc: nombre d'argument
*
* Return: Ne retourne  rien car la fonction est void
*/
void checkInput(int argc)
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}
