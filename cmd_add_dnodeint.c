#include "monty.h"


/**
* add_dnodeint - Ajouter un nœud au début de la liste chaînée
*
* @head: Double pointeur vers la liste chaînée
* @n: Valeur à remplir
*
* Return: Un pointeur vers le nouveau nœud créé
*/
stack_t *add_dnodeint(stack_t **head, const int n)
{
	stack_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(stack_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
