#include "monty.h"


/**
* add_dnodeint_end - Ajoute un nouveau nœud à la fin de la liste chaînée
*
* @head: Double pointeur vers la liste chaînée
* @n: Valeur à remplir
*
* Return: Un pointeur vers le nouveau nœud créé
*/
stack_t *add_dnodeint_end(stack_t **head, const int n)
{
	stack_t *new, *ptmp;

	if (!head)
		return (NULL);

	new = malloc(sizeof(stack_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		ptmp = *head;
		for (; ptmp->next; ptmp = ptmp->next)
		;
		ptmp->next = new;
		new->prev = ptmp;
	}

	return (new);
}
