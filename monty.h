#ifndef MONTY_H
#define MONTY_H

#define  _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
* struct global - Créez la variable malloc globale, pour libérer plus facilement
*
* @file: pointeur vers le fichier
* @arrayCommand: Le tableau de commande
* @head: pointeur vers la liste chaînée
* @lineBuff: le pointeur vers la ligne de réception du buffer
* @etat: 0 correspond à la pile, 1 à la file d'attente
*
*/
typedef struct global
{
	FILE *file;
	char **arrayCommand;
	stack_t *head;
	char *lineBuff;
	int etat;
} global;

global globalVar;

/* Prototype */

/* INIT */
void init_data(void);
void checkInput(int argc);
void openFile(char *fileName);
void traitementDeLigne(void);

/* FN COMMAND */
void (*chercheLaFonctionAssocierALaCommande(void))(stack_t **stack_t, unsigned int line);
void op_push(stack_t **stack_t, unsigned int line);
void op_pall(stack_t **stack, unsigned int line_number);
void op_pop(stack_t **stack, unsigned int line_number);
void op_pint(stack_t **stack, unsigned int line_number);
void op_printElm(stack_t **stack, unsigned int line_number);
void op_newLine(stack_t **stack, unsigned int line_number);
void op_nop(stack_t **stack, unsigned int line_number);
void op_add(stack_t **stack, unsigned int line_number);
void op_sub(stack_t **stack, unsigned int line_number);
void op_mul(stack_t **stack, unsigned int line_number);
void op_div(stack_t **stack, unsigned int line_number);
void op_mod(stack_t **stack, unsigned int line_number);
void op_swap(stack_t **stack, unsigned int line_number);
void op_pchar(stack_t **stack, unsigned int line_number);
void op_pstr(stack_t **stack, unsigned int line_number);
void op_rotl(stack_t **stack, unsigned int line_number);
void op_rotr(stack_t **stack, unsigned int line_number);
stack_t *add_dnodeint_end(stack_t **head, const int n);
stack_t *add_dnodeint(stack_t **head, const int n);
void op_stack(stack_t **stack, unsigned int line_number);
void op_queue(stack_t **stack, unsigned int line_number);
int isNumber(char *str, int line_number);

/* STR Traitement */
int _len_word(char *s);
void _strtow(char *str);
int _count_word(char *str);

/* FREE */
void freeAll(void);
void freeArrayCommand(void);
void freeList(stack_t *head);

#endif
