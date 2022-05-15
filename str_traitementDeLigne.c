#include "monty.h"


/**
* traitementDeLigne - Traite la ligne saisie
*
* Return: rien car fonction void
*/
void traitementDeLigne(void)
{
	int i, lenStr = strlen(globalVar.lineBuff) - 1;

	if (globalVar.lineBuff[lenStr] == '\n')
		globalVar.lineBuff[lenStr] = '\0';
	for (i = 0; globalVar.lineBuff[i]; i++)
	{
		if (globalVar.lineBuff[i] == '#')
			globalVar.lineBuff[i] = '\0';
		if (globalVar.lineBuff[i] == '\t')
			globalVar.lineBuff[i] = ' ';
		if (globalVar.lineBuff[i] == '\n')
			globalVar.lineBuff[i] = '\0';
	}
	for (i = 0; globalVar.lineBuff[i]; i++)
	{
		if (globalVar.lineBuff[i] != ' ')
			break;
	}
	if (globalVar.lineBuff[i] == '\0')
		globalVar.lineBuff[0] = '\0';
}
