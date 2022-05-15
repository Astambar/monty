#include "monty.h"

/**
* freeAll - vide toute les variables
*/
void freeAll(void)
{
	freeList(globalVar.head);
	freeArrayCommand();
}
