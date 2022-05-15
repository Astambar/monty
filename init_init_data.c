#include "monty.h"


/**
* init_data - Initialise les paramètres de globalVar
*
* Return: ne renvoi  rien car fonction Void
*/
void init_data(void)
{
	globalVar.lineBuff = NULL;
	globalVar.head = NULL;
	globalVar.arrayCommand = NULL;
	globalVar.file = NULL;
	globalVar.etat = 0;
}
