#include "monty.h"


/**
* freeList - vide la liste chaînéet
*
* @head: pointeur sur la liste chaînée
*/
void freeList(stack_t *head)
{
	stack_t *courant;

	for (; head; courant = head, head = head->next, free(courant))
	;
}
